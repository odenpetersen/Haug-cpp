# C++ Haug

Translating VBA code from Espen Gaarder Haug's classic book [The Complete Guide to Option Pricing Formulas (1997)](https://www.amazon.com.au/Complete-Guide-Option-Pricing-Formulas/dp/0071389970) in C++.

Please read the book for explanations of the formulas themselves and their parameters.

This project mostly attempts to conform to [Google's C++ Style Guide](https://students.cs.byu.edu/~cs235ta/references/Cpp%20Style/Google%20Cpp%20Style%20Guide.pdf), but this is not guaranteed. Variables are often renamed (i.e. differently to the book) for clarity.

Page numbers are from the second edition of the book.

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
#### GDelta (Page 27)
Formula for delta $(\Delta)$ with generalised Black-Scholes assumptions. Gives a negative value for put delta.
#### GBlackScholesNGreeks (Pages 87-89) (WIP)
Approximates various greeks using finite differences. Note that explicit formulas are also provided for many of these in the book.

### 3. Analytical Formulas for American Options (WIP)
#### BAWAmericanCallApprox (Pages 99-100) (WIP)
Pricing formula for American options based on the Barone-Adesi and Whaley approximation formula.
##### Kc (Pages 100-101) (WIP)
Uses the Newton-Raphson method to find the critical price used by the `BAWAmericanCallApprox` function.
#### BSAmericanCallApprox (Pages 103-104) (WIP)
Computes the Bjerksund and Stensland (1993) approximation for American option pricing.
##### Phi (Page 104) (WIP)
Used by the `BSAmericanCallApprox` and `BSAmericanCallApprox2002` functions.
#### BSAmericanApprox2002 (Pages 106-107) (WIP)
##### BSAmericanCallApprox2002 (Pages 107-108) (WIP)
##### Psi (Page 108) (WIP)
Note: the author refers to this as `ksi`, but uses the symbol $\psi$ (psi).

### 4. Exotic Options - Single Asset (WIP)
#### PoweredOption (Pages 118-119) (WIP)
#### TimeSwitchOption (Pages 127-128) (WIP)
#### ComplexChooser (Page 131) (WIP)
##### CriticalValueChooser (Pages 131-132) (WIP)
#### OptionsOnOptions (Pages 134-135) (WIP)
##### CriticalValueOptionsOnOptions (Page 135) (WIP)
#### DoubleBarrier (Pages 159-160) (WIP)
#### GeometricVolFromLocalVolTermStructure (Page 184) (WIP)
#### GeometricVolFromGlobalVol (Page 185) (WIP)
#### TurnbullWakemanAsian (Pages 187-189) (WIP)
#### DiscreteAsianHHM (Pages 193-195) (WIP)
#### AsianCurranApprox (Pages 197-199) (WIP)
#### AsianDiscreteTermStructure (Pages 201-202) (WIP)

### 5. Exotic Options on Two Assets (WIP)
#### Quanto (Page 230) (WIP)

### 6. Black-Scholes-Merton Adjustments and Alternatives (WIP)
#### JarrowRuddSkewKurt (Pages 246-247) (WIP)
#### SkewKurtCorradoSu (Pages 249-250) (WIP)
#### SkewKurtCorradoSuModified (Pages 250-251) (WIP)
#### JumpDiffusionMerton (Page 254) (WIP)
#### JumpDiffusionBates (Pages 257-258) (WIP)
#### HullWhite87SV (Pages 260-261) (WIP)
#### HullWhite88SV (Pages 264-265) (WIP)
#### SABRVolatility (Page 268) (WIP)
##### AlphaSABR (Pages 268-269) (WIP)
##### FindAlpha (Page 269) (WIP)
##### CRoot (Pages 269-270) (WIP)
Finds the smallest positive root of a cubic polynomial, given its coefficients. Algorithm is credited to [Numerical Recipes](http://numerical.recipes/).
##### ArcCos (Page 270)
No need to implement this, since it's already in `<cmath>`. The algorithm in the book just uses VBA's `Atn` (arctan) function.

### 7. Trees and Finite Difference Methods (WIP)
#### EuropeanBinomialPlainVanilla (Pages 281-282) (WIP)
#### EuropeanBinomial (Page 283) (WIP)
##### BinomialPayoff (Pages 283-284) (WIP)
#### CRRBinomial (Pages 288-289) (WIP)
#### LeisenReimerBinomial (Pages 291-292) (WIP)
#### ConvertibleBond (Pages 296-297) (WIP)
#### RubensteinSKB (Pages 298-299) (WIP)
#### TrinomialTree (Pages 301-302) (WIP)
#### BinomialCompoundOption (Pages 304-305) (WIP)
#### BinomialBridgeBarrier (Pages 306-307) (WIP)
#### ThreeDimensionalBinomial (Pages 317-318) (WIP)
##### PayoffFunction (Pages 318-319) (WIP)
#### ThreeDimensionalBinomialEuropean (Page 320) (WIP)
Note that the function name in the book is misspelt `ThreeDimensionalBinomiaEuropean`.
#### ImpliedTrinomialTree (Pages 331-334) (WIP)
#### ExplicitFiniteDifference (Pages 337-338) (WIP)
#### ImplicitFiniteDifference (Pages 339-340) (WIP)
#### ExplicitFiniteDifferenceLnS (Pages 341-342) (WIP)
#### CrankNicolson (Pages 342-343) (WIP)

### 8. Monte Carlo Simulation (WIP)
#### MonteCarloStandardOption (Pages 346-347) (WIP)
#### StandardMCWithGreeks (Pages 348-349) (WIP)
#### CallableWarrantNDays (Pages 349-350) (WIP)
#### MonteCarloAsianSpreadOption (Pages 351-352) (WIP)
#### MonteCarloTripleAsset (Page 353) (WIP)
#### CholeskyDecomposition (Pages 354-355) (WIP)
#### MonteCarloMeanReverting (Pages 355-356) (WIP)
#### BoxMuller2 (Page 357) (WIP)
#### MonteCarloStandardOptionAntithetic (Pages 358-359) (WIP)
#### IQMC (Page 361) (WIP)
#### IQMC2Asset (Pages 361-362) (WIP)
#### Halton (Page 363) (WIP)
#### HaltonMonteCarloStandardOption (Page 363) (WIP)
#### SuperIQMC (Page 364) (WIP)
#### BroadieGlasserman (Pages 365-366) (WIP)
##### NormInv (Page 366) (WIP)

### 9. Options on Stocks That Pay Discrete Dividends (WIP)
#### HaugHaugVol (Page 370) (WIP)
#### BosGaiShepVol (Page 371) (WIP)
#### GBlackScholesBVCashDividend (Page 372) (WIP)
#### BinomialDiscreteDividends (Pages 373-375) (WIP)
#### RollGeskeWhaley (Pages 377-378) (WIP)
#### DiscreteDividendYieldAnalytic (Pages 391-392) (WIP)
#### DiscreteDividendYield (Page 393-395) (WIP)

### 10. Commodity and Energy Options (WIP)
This chapter has no sample code.

### 11. Interest Rate Derivatives (WIP)
#### SwaptionVol (Page 425) (WIP)
#### BDTYieldOnly (Pages 441-443) (WIP)

### 12. Volatility and Correlation (WIP)
#### CloseVolatility (Page 446) (WIP)
##### LogChange (Pages 446-447) (WIP)
#### HighLowVolatility (Page 448) (WIP)
##### LogHighLow (Page 448) (WIP)
#### HighLowCloseVolatility (Page 449) (WIP)
#### ExponentiallyWeightedVol (Page 450) (WIP)
#### ConfidenceIntervalVolatility (Page 452) (WIP)
#### VolatilityCone (Page 453) (WIP)
#### GImpliedVolatilityNR (Pages 454-455) (WIP)
#### GBlackScholesImpVolBisection (Pages 455-456) (WIP)
#### BasketVolatility (Pages 460) (WIP)
#### HistoricalCorrelation (Pages 460-461) (WIP)
#### CorrDen (Pages 461-462) (WIP)

### 13. Distributions (WIP)
#### CND (Pages 466-467) (WIP)
#### CND2 (Pages 468-469) (WIP)
#### CNDEV (Pages 469-470) (WIP)
#### CBND3 (Page 476) (WIP)
#### CBND2 (Page 477) (WIP)
#### CBND (Pages 478-480) (WIP)
##### ArcSin (Page 480) (WIP)
No need to implement this, since it's already in `<cmath>`. The algorithm in the book just uses VBA's `Atn` (arctan) function.
#### CTND (Pages 482-483) (WIP)
##### ADONED (Pages 483-484) (WIP)
##### KRNRDD (Pages 484-486) (WIP)
##### TRVFND (Page 486) (WIP)

### 14. Some Useful Formulas (WIP)
#### CubicSpline (Pages 489-490) (WIP)
