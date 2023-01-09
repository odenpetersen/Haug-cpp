#ifndef HAUG_
#define HAUG_
#include "haug.h"
#endif

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

//Pages 99-100
double BAWAmericanCallApprox(double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double cost_of_carry_annual, double sigma_annual) {
	double critical_price, n, k;
	double d1, q2, a2;
	double variance_annual = std::pow(sigma_annual, 2.);

	return 0;
	/*
	if (cost_of_carry_annual > risk_free_rate_annual) {
		return GBlackScholes('c', stock_price, strike_price, time_to_expiry_years, risk_free_rate_annual, cost_of_carry_annual, sigma_annual);
	} else {
		critical_price = Kc(strike_price, time_to_expiry_years, risk_free_rate_annual, cost_of_carry_annual, sigma_annual);
		n = 2 * cost_of_carry_annual / variance_annual;
		k = 2 * risk_free_rate_annual / (variance_annual * (1 - std::exp( - risk_free_rate * time_to_expiry_years)));
		d1 = (std::log(critical_price / strike_price) + (cost_of_carry_annual + variance_annual / 2) * time_to_expiry_years) / (sigma_annual * std::sqrt(time_to_expiry_years));
		q2 = ( - (n - 1) + std::sqrt(std::pow(n - 1, 2.) + 4 * k)) / 2;
		a2 = () * (1 - std::exp((cost_of_carry_annual - risk_free_rate_annual) * time_to_expiry_years) * pnorm(d1));
		if (stock_price < critical_price) {
			return GBlackScholes('c', stock_price, strike_price, time_to_expiry_years, risk_free_rate_annual, cost_of_carry_annual, sigma_annual)
			       + a2 * std::pow(stock_price / critical_price, q2);
		} else {
			return stock_price - strike_price;
		}
	}
	*/
}

//Pages 100-101
double Kc(double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double cost_of_carry_annual, double sigma_annual) {
	double n, m;
	double su, current_estimate;
	double h2, k;
	double d1, q2, q2u;
	double lhs, rhs;
	double gradient, tolerance;

	return 0;
	/*
	//Calculation of initial value for current_estimate
	n = 2 * cost_of_carry_annual / std::pow(sigma_annual, 2.);
	m = 2 * risk_free_rate_annual / std::pow(sigma_annual, 2.);
	*/
}

#ifndef TEST_
#define TEST_
#include "test.h"
#endif

void test_03() {
	std::cout << "Chapter 03 Tests" << std::endl << std::endl;

	double expected, output;
	double stock_price, strike_price, time_to_expiry_years, risk_free_rate_annual, cost_of_carry_annual, sigma_annual;

	std::cout << "Page 26 test data" << std::endl;

	stock_price = 105;
	strike_price = 100;
	time_to_expiry_years = 0.5;
	risk_free_rate_annual = 0.1;
	cost_of_carry_annual = 0;
	sigma_annual = 0.36;

	std::cout << "Correct GDelta output" << std::endl;
	expected = 0.5946;
	output = GDelta('c', stock_price, strike_price, time_to_expiry_years, risk_free_rate_annual, cost_of_carry_annual, sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;
	expected = -0.3566;
	output = GDelta('p', stock_price, strike_price, time_to_expiry_years, risk_free_rate_annual, cost_of_carry_annual, sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;

	std::cout << std::endl << std::endl << std::endl;
}
