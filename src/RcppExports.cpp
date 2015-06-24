// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// factorial
int factorial(int n);
RcppExport SEXP hw6package_factorial(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(factorial(n));
    return __result;
END_RCPP
}
// ass
IntegerMatrix ass(int n);
RcppExport SEXP hw6package_ass(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    __result = Rcpp::wrap(ass(n));
    return __result;
END_RCPP
}
// mode
int mode(IntegerVector x);
RcppExport SEXP hw6package_mode(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    __result = Rcpp::wrap(mode(x));
    return __result;
END_RCPP
}
// simplify2array
NumericMatrix simplify2array(List vec_list);
RcppExport SEXP hw6package_simplify2array(SEXP vec_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type vec_list(vec_listSEXP);
    __result = Rcpp::wrap(simplify2array(vec_list));
    return __result;
END_RCPP
}