#ifndef HAUG_
#define HAUG_
#include "haug.h"
#endif

#ifndef TEST_
#define TEST_
#include "test.h"
#endif

void test_08() {
	/*
	std::cout << "Chapter 01 Tests" << std::endl << std::endl;

	double expected, output;
	double stock_price, strike_price, time_to_expiry_years, risk_free_rate, cost_of_carry_annual, sigma_annual;

	std::cout << "Page 3 test data" << std::endl;

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

	std::cout << "Page 8 test data" << std::endl;

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

	*/
}
