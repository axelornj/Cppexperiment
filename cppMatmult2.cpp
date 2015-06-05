#include <Rcpp.h>
#include <RcppEigen.h>
using namespace Eigen;
using namespace Rcpp;


// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar
// [[Rcpp::depends(RcppEigen)]] 
// [[Rcpp::export]]
MatrixXd cppMatmult2(const Map<MatrixXd> m1, const Map<MatrixXd&> m2) {
   const MatrixXd& outm = m1 * m2;
   return outm;
}
