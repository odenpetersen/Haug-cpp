//01
double BlackScholes(char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double sigma_annual);
double GBlackScholes(char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double cost_of_carry_annual, double sigma_annual);

//02
double GDelta(char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double cost_of_carry_annual, double sigma_annual);
double GBlackScholesNGreeks(char output_flag, char call_put_flag, double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double cost_of_carry_annual, double sigma_annual, double stock_price_change);

//03
double BAWAmericanCallApprox(double stock_price, double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double cost_of_carry_annual, double sigma_annual);
double Kc(double strike_price, double time_to_expiry_years, double risk_free_rate_annual, double cost_of_carry_annual, double sigma_annual);

//04
