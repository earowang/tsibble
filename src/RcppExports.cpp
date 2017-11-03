// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// minp
double minp(NumericVector x);
RcppExport SEXP _tsibble_minp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(minp(x));
    return rcpp_result_gen;
END_RCPP
}
// any_not_equal_to_c
bool any_not_equal_to_c(NumericVector x, double c);
RcppExport SEXP _tsibble_any_not_equal_to_c(SEXP xSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(any_not_equal_to_c(x, c));
    return rcpp_result_gen;
END_RCPP
}
// is_descending
bool is_descending(IntegerVector x);
RcppExport SEXP _tsibble_is_descending(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(is_descending(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tsibble_minp", (DL_FUNC) &_tsibble_minp, 1},
    {"_tsibble_any_not_equal_to_c", (DL_FUNC) &_tsibble_any_not_equal_to_c, 2},
    {"_tsibble_is_descending", (DL_FUNC) &_tsibble_is_descending, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_tsibble(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
