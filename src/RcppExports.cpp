// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// hat_matrix_cpp
arma::mat hat_matrix_cpp(arma::mat X, arma::mat mcov, bool S_scale_dist, double h);
RcppExport SEXP _shapr_hat_matrix_cpp(SEXP XSEXP, SEXP mcovSEXP, SEXP S_scale_distSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mcov(mcovSEXP);
    Rcpp::traits::input_parameter< bool >::type S_scale_dist(S_scale_distSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(hat_matrix_cpp(X, mcov, S_scale_dist, h));
    return rcpp_result_gen;
END_RCPP
}
// rss_cpp
double rss_cpp(arma::mat H, arma::vec y);
RcppExport SEXP _shapr_rss_cpp(SEXP HSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(rss_cpp(H, y));
    return rcpp_result_gen;
END_RCPP
}
// correction_matrix_cpp
double correction_matrix_cpp(double tr_H, int n);
RcppExport SEXP _shapr_correction_matrix_cpp(SEXP tr_HSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type tr_H(tr_HSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(correction_matrix_cpp(tr_H, n));
    return rcpp_result_gen;
END_RCPP
}
// aicc_full_single_cpp
arma::vec aicc_full_single_cpp(arma::mat X, arma::mat mcov, bool S_scale_dist, double h, arma::vec y);
RcppExport SEXP _shapr_aicc_full_single_cpp(SEXP XSEXP, SEXP mcovSEXP, SEXP S_scale_distSEXP, SEXP hSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mcov(mcovSEXP);
    Rcpp::traits::input_parameter< bool >::type S_scale_dist(S_scale_distSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(aicc_full_single_cpp(X, mcov, S_scale_dist, h, y));
    return rcpp_result_gen;
END_RCPP
}
// aicc_full_cpp
double aicc_full_cpp(double h, Rcpp::List X_list, Rcpp::List mcov_list, bool S_scale_dist, Rcpp::List y_list, bool negative);
RcppExport SEXP _shapr_aicc_full_cpp(SEXP hSEXP, SEXP X_listSEXP, SEXP mcov_listSEXP, SEXP S_scale_distSEXP, SEXP y_listSEXP, SEXP negativeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type X_list(X_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type mcov_list(mcov_listSEXP);
    Rcpp::traits::input_parameter< bool >::type S_scale_dist(S_scale_distSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type y_list(y_listSEXP);
    Rcpp::traits::input_parameter< bool >::type negative(negativeSEXP);
    rcpp_result_gen = Rcpp::wrap(aicc_full_cpp(h, X_list, mcov_list, S_scale_dist, y_list, negative));
    return rcpp_result_gen;
END_RCPP
}
// mahalanobis_distance_cpp
arma::cube mahalanobis_distance_cpp(Rcpp::List featureList, arma::mat Xtrain_mat, arma::mat Xtest_mat, arma::mat mcov, bool S_scale_dist);
RcppExport SEXP _shapr_mahalanobis_distance_cpp(SEXP featureListSEXP, SEXP Xtrain_matSEXP, SEXP Xtest_matSEXP, SEXP mcovSEXP, SEXP S_scale_distSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type featureList(featureListSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtrain_mat(Xtrain_matSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Xtest_mat(Xtest_matSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mcov(mcovSEXP);
    Rcpp::traits::input_parameter< bool >::type S_scale_dist(S_scale_distSEXP);
    rcpp_result_gen = Rcpp::wrap(mahalanobis_distance_cpp(featureList, Xtrain_mat, Xtest_mat, mcov, S_scale_dist));
    return rcpp_result_gen;
END_RCPP
}
// observation_impute_cpp
NumericMatrix observation_impute_cpp(IntegerVector ID, IntegerVector Comb, NumericMatrix Xtrain, NumericMatrix Xtest, IntegerMatrix S);
RcppExport SEXP _shapr_observation_impute_cpp(SEXP IDSEXP, SEXP CombSEXP, SEXP XtrainSEXP, SEXP XtestSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type ID(IDSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type Comb(CombSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xtrain(XtrainSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Xtest(XtestSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(observation_impute_cpp(ID, Comb, Xtrain, Xtest, S));
    return rcpp_result_gen;
END_RCPP
}
// weight_matrix_cpp
arma::mat weight_matrix_cpp(List features, int m, int n, NumericVector w);
RcppExport SEXP _shapr_weight_matrix_cpp(SEXP featuresSEXP, SEXP mSEXP, SEXP nSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(weight_matrix_cpp(features, m, n, w));
    return rcpp_result_gen;
END_RCPP
}
// feature_matrix_cpp
NumericMatrix feature_matrix_cpp(List features, int nfeatures);
RcppExport SEXP _shapr_feature_matrix_cpp(SEXP featuresSEXP, SEXP nfeaturesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type features(featuresSEXP);
    Rcpp::traits::input_parameter< int >::type nfeatures(nfeaturesSEXP);
    rcpp_result_gen = Rcpp::wrap(feature_matrix_cpp(features, nfeatures));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_shapr_hat_matrix_cpp", (DL_FUNC) &_shapr_hat_matrix_cpp, 4},
    {"_shapr_rss_cpp", (DL_FUNC) &_shapr_rss_cpp, 2},
    {"_shapr_correction_matrix_cpp", (DL_FUNC) &_shapr_correction_matrix_cpp, 2},
    {"_shapr_aicc_full_single_cpp", (DL_FUNC) &_shapr_aicc_full_single_cpp, 5},
    {"_shapr_aicc_full_cpp", (DL_FUNC) &_shapr_aicc_full_cpp, 6},
    {"_shapr_mahalanobis_distance_cpp", (DL_FUNC) &_shapr_mahalanobis_distance_cpp, 5},
    {"_shapr_observation_impute_cpp", (DL_FUNC) &_shapr_observation_impute_cpp, 5},
    {"_shapr_weight_matrix_cpp", (DL_FUNC) &_shapr_weight_matrix_cpp, 4},
    {"_shapr_feature_matrix_cpp", (DL_FUNC) &_shapr_feature_matrix_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_shapr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
