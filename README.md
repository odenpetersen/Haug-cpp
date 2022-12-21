# C++ Haug

Translating VBA code from Espen Gaarder Haug's classic book [The Complete Guide to Option Pricing Formulas](https://www.amazon.com.au/Complete-Guide-Option-Pricing-Formulas/dp/0071389970) in C++.

Please read the book for explanations of the formulas themselves and their parameters.

This project mostly attempts to conform to [Google's C++ Style Guide](https://students.cs.byu.edu/~cs235ta/references/Cpp%20Style/Google%20Cpp%20Style%20Guide.pdf), but this is not guaranteed. Variables are often renamed (i.e. differently to the book) for clarity.

## Contents
### 1. Black-Scholes-Merton
#### BlackScholes (Page 3)
Original Black-Scholes pricing formula for European-style calls/puts
#### GBlackScholes (Page 8)
Generalised Black-Scholes pricing formula for European-style calls/puts with an additional "cost of carry" parameter.
Per page 8:
- $b=r$ yields the original pricing formula
- $b=r-q$ adjusts the original pricing formula to include a continuous dividend yield $q$
- $b=0$ yields the Black (1976) futures option model
- $b=0,r=0$ yields the Assay (1982) margined futures option model
- $b=r-r_f$ yields the Garman & Kohlhagen (1983) currency option model, where $r_f$ is the foreign risk-free rate

### 2. Black-Scholes-Merton Greeks (WIP)
#### GDelta
### 3. Analytical Formulas for American Options (WIP)
### 4. Exotic Options - Single Asset (WIP)
### 5. Exotic Options on Two Assets (WIP)
### 6. Black-Scholes-Merton Adjustments and Alternatives (WIP)
### 7. Trees and Finite Difference Methods (WIP)
### 8. Monte Carlo Simulation (WIP)
### 9. Options on Stocks That Pay Discrete Dividends (WIP)
### 10. Commodity and Energy Options (WIP)
### 11. Interest Rate Derivatives (WIP)
### 12. Volatility and Correlation (WIP)
### 13. Distributions (WIP)
### 14. Some Useful Formulas (WIP)
