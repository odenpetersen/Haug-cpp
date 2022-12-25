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
double BAWAmericanCallApprox(double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate, double cost_of_carry_annual, double sigma_annual) {
	double critical_price, n, k;
	double d1, q2, a2;

	if (call_put_flag == 'c') {
		return std::exp((cost_of_carry_annual - risk_free_rate) * time_to_expiry_years) * pnorm(d1);
	} else if (call_put_flag == 'p') {
		return - std::exp((cost_of_carry_annual - risk_free_rate) * time_to_expiry_years) * pnorm(-d1); //This is pretty repetitive, could probably be refactored using symmetry
	} else {
		throw std::invalid_argument("Argument call_put_flag to function GDelta must be either 'c' or 'p'");
	}
}


void test_03() {
	std::cout << "Chapter 03 Tests" << std::endl << std::endl;

	double expected, output;
	double stock_price, strike_price, time_to_expiry_years, risk_free_rate, cost_of_carry_annual, sigma_annual;

	//Page 26
	stock_price = 105;
	strike_price = 100;
	time_to_expiry_years = 0.5;
	risk_free_rate = 0.1;
	cost_of_carry_annual = 0;
	sigma_annual = 0.36;

	std::cout << "Correct GDelta output" << std::endl;
	expected = 0.5946;
	output = GDelta('c', stock_price, strike_price, time_to_expiry_years, risk_free_rate, cost_of_carry_annual, sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;
	expected = -0.3566;
	output = GDelta('p', stock_price, strike_price, time_to_expiry_years, risk_free_rate, cost_of_carry_annual, sigma_annual);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;

	std::cout << std::endl << std::endl << std::endl;
}

int main(int argc, char *argv[]) {
	test_03();
}
