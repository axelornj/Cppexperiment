#include <Rcpp.h>
using namespace Rcpp;

// Below is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar)

// For more on using Rcpp click the Help button on the editor toolbar

// [[Rcpp::export]]

NumericMatrix cppMatmult(NumericMatrix m1,NumericMatrix m2) {
  int ROW = m1.nrow(), COL = m2.ncol(), INNER = m1.ncol();
  // m1(ROW,INNER), m2(INNER,COL);
  NumericMatrix mout(ROW,COL);
 
for (int row = 0; row != ROW; ++row) 
  {
     	for (int col = 0; col != COL; ++col)
		{
			int sum = 0;
			for (int inner = 0; inner != INNER; ++inner)
			{
				sum += m1(row,inner) * m2(inner,col); //+= sum = sum + A[row][inner] * B[inner][col];
			}
			mout(row,col) = sum;
		}
  }
  
  return mout;
}
