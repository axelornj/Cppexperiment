#include <Rcpp.h>
using namespace Rcpp;

// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar

// [[Rcpp::export]]

NumericMatrix cppchol(NumericMatrix m){
    NumericMatrix L(2);
    int k,j,i;
    for(k=0;k<2;k++){
        m(k,k)=sqrt(m(k,k));
        for(i=k+1;i<2;i++){
            m(i,k)=m(i,k)/m(k,k);
        }
        for(j=k+1;j<2;j++){
            for (i=j;i<2;i++){
                m(i,j)=m(i,j)-m(i,k)*m(j,k);   
            }    
        }
        
    }
    return m;
    
}
