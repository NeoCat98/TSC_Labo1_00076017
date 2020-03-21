#include <iostream>
#include "math_tools.h"
#include "display_tools.h"
using namespace std;

int main(int argc, char** argv) {
	float det;
    Matrix matrix_a,matrix_cofactor,matrix_trans,matrix_result;
	
	zeroes(matrix_a,3);
	
	matrix_a.at(0).at(0) = 2; matrix_a.at(0).at(1) = 2; matrix_a.at(0).at(2) = 3;
	matrix_a.at(1).at(0) = 6; matrix_a.at(1).at(1) = 5; matrix_a.at(1).at(2) = 6;
	matrix_a.at(2).at(0) = 7; matrix_a.at(2).at(1) = 8; matrix_a.at(2).at(2) = 9;


    //1/|A|
    det = determinant(matrix_a);
    det = 1 / det;
    //cof(A)
    cofactors(matrix_a,matrix_cofactor);
    //(cof(A))^T
    transpose(matrix_cofactor,matrix_trans);
    //(cof(A))^T * (1 / |A|)
    productRealMatrix(det,matrix_trans,matrix_result);

    //mostrar A^-1
    showMatrix(matrix_result);
}
