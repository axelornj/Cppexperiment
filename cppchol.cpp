#include <Rcpp.h>
using namespace Rcpp;

// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar

// [[Rcpp::export]]

NumericMatrix cppchol(NumericMatrix m){
    NumericMatrix L(2);
    for(k=0;k<2;k++){
        m(k,k)=sqrt(m(k,k));
        for(i=k+1;i<2;i++){
            int m(i,k)=m(i,k)/m(k,k);
        }
        for(j=k+1;j<2,;j++)
        
    
    int L11=sqrt(m(1,1)-pow(L10,2));
    L(0,0) = L00;
    L(1,0) = 0;
    
    L(0,1)=L10;
    L(1,1) = L11;
    return L;
    
}
