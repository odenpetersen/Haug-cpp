#ifndef IOSTREAM_
#define IOSTREAM_
#include <iostream>
#endif

#ifndef CMATH_
#define CMATH_
#include <cmath>
#endif

#ifndef STDEXCEPT_
#define STDEXCEPT_
#include <stdexcept>
#endif

#ifndef UTILS_STATS_
#define UTILS_STATS_
#include "utils/stats.h"
#endif

#ifndef UTILS_NUMERICAL_
#define UTILS_NUMERICAL_
#include "utils/numerical.h"
#endif

//Page 3
double BlackScholes(char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate, double sigma_annual) {
	double d1 = (std::log(stock_price / strike_price) + (risk_free_rate + std::pow(sigma_annual,2.) / 2.) * time_to_expiry_years) / (sigma_annual * std::sqrt(time_to_expiry_years));
	double d2 = d1 - sigma_annual * std::sqrt(time_to_expiry_years);

	if (call_put_flag == 'c') {
		return stock_price * pnorm(d1) - strike_price * std::exp( - risk_free_rate * time_to_expiry_years) * pnorm(d2);
	} else if (call_put_flag == 'p') {
		return strike_price * std::exp( - risk_free_rate * time_to_expiry_years) * pnorm( - d2) - stock_price * pnorm( - d1);
	} else {
		throw std::invalid_argument("Argument call_put_flag to function BlackScholes must be either 'c' or 'p'");
	}
}

//Page 8
double GBlackScholes(char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate, double cost_of_carry_annual, double sigma_annual) {
	double d1 = (std::log(stock_price / strike_price) + (cost_of_carry_annual + std::pow(sigma_annual,2.) / 2.) * time_to_expiry_years) / (sigma_annual * std::sqrt(time_to_expiry_years));
	double d2 = d1 - sigma_annual * std::sqrt(time_to_expiry_years);

	if (call_put_flag == 'c') {
		return stock_price * std::exp((cost_of_carry_annual - risk_free_rate) * time_to_expiry_years) * pnorm(d1) - strike_price * std::exp( - risk_free_rate * time_to_expiry_years) * pnorm(d2);
	} else if (call_put_flag == 'p') {
		return strike_price * std::exp( - risk_free_rate * time_to_expiry_years) * pnorm( - d2) - stock_price * std::exp((cost_of_carry_annual - risk_free_rate) * time_to_expiry_years) * pnorm( - d1);
	} else {
		throw std::invalid_argument("Argument call_put_flag to function GBlackScholes must be either 'c' or 'p'");
	}
}

void test_01() {
	std::cout << "Chapter 01 Tests" << std::endl << std::endl;

	double expected, output;
	double stock_price, strike_price, time_to_expiry_years, risk_free_rate, cost_of_carry_annual, sigma_annual;

	//Page 3
	stock_price = 60;
	strike_price = 65;
	time_to_expiry_years = 0.25;
	risk_free_rate = 0.08;
	sigma_annual = 0.3;

	std::cout << "Correct BlackScholes output" << std::endl;
	expected = 2.1334;
	output = BlackScholes('c', stock_price, strike_price, time_to_expiry_years, risk_free_rate, sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;

	std::cout << "BlackScholes is special case of GBlackScholes (Page 8)" << std::endl;
	expected = output;
	output = GBlackScholes('c', stock_price, strike_price, time_to_expiry_years, risk_free_rate, risk_free_rate, sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;

	std::cout << "Put-Call Supersymmetry (Page 11)" << std::endl;
	output = BlackScholes('p', - stock_price, - strike_price, time_to_expiry_years, risk_free_rate, - sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;

	//Page 8
	stock_price = 75;
	strike_price = 70;
	time_to_expiry_years = 0.5;
	risk_free_rate = 0.1;
	cost_of_carry_annual = 0.05;
	sigma_annual = 0.35;

	std::cout << "Correct GBlackScholes output" << std::endl;
	expected = 4.0870;
	output = GBlackScholes('p', stock_price, strike_price, time_to_expiry_years, risk_free_rate, cost_of_carry_annual, sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;

	std::cout << "Put-Call Supersymmetry (Page 11)" << std::endl;
	expected = output;
	output = GBlackScholes('c', - stock_price, - strike_price, time_to_expiry_years, risk_free_rate, cost_of_carry_annual, - sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;

	std::cout << std::endl << std::endl << std::endl;
}

int main(int argc, char *argv[]) {
	test_01();
}
