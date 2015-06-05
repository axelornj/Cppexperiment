
#include <RcppArmadillo.h>

// [[Rcpp::depends(RcppArmadillo)]]
// [[Rcpp::export]]
arma::mat mult(arma::mat A, arma::mat B) {
    return A*B; }
