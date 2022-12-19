#ifndef CMATH_
#define CMATH_
#include <cmath>
#endif

#ifndef STDEXCEPT_
#define STDEXCEPT_
#include <stdexcept>
#endif

//Page 3
double BlackScholes(char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate, double sigma_annual) {
	double d1 = (std::log(stock_price / strike_price) + (risk_free_rate + sigma_annual**2 / 2) * time_to_expiry_years) / (sigma_annual * std::sqrt(time_to_expiry_years));
	double d2 = d1 - v * std::sqrt(time_to_expiry_years);

	if (call_put_flag == 'c') {
		return stock_price * pnorm(d1) - strike_price * std::exp( - risk_free_rate * time_to_expiry_years) * pnorm(d2);
	} else if (call_put_flag == 'p') {
		return strike_price * std::exp( - risk_free_rate * time_to_expiry_years) * ;
	} else {
		throw std::invalid_argument("Argument call_put_flag to function BlackScholes must be either 'c' or 'p'");
	}
}

double GBlackScholes(char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate, double cost_of_carry_annual, double sigma_annual) {
	
}

void test_1_1_1() {
	double expected, output;

	expected = 2.1334;
	output = BlackScholes('c', 60, 65, 0.25, 0.08, 0.3);
	std::cout << expected << ' ' << output << ' ' << relative_error(expected,output) << std::endl;
}
