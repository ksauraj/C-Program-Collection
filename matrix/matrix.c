#include<stdio.h>
#include"./matrix.h"


int main(){
  int mat_a[4][3];
  matrix_creator_2d(4,3, (int*)&mat_a);
  printf("\nCreated matrix is : \n"); // Checking Created matrix if its same as the user entered...
  matrix_printer_2d(4,3, (int*)&mat_a); // This funtion prints matric having int values...

  // Now lets create a transpose of matrix A.
  int mat_b[3][4];
  transpose_of_matrix(4, 3, (int*)&mat_a, (int*)&mat_b); // transpose_of_matrix('no of rows in org matrix', 'no of cols in org matrix', address of org matrix, address of transpose matrix)
  printf("\nTranspose of given matrix is : \n");
  matrix_printer_2d(3,4, (int*)&mat_b); // Note : Following function will fail if data type is other than int...

  // Now converting mat B to float type and storing it in mat C.
  float mat_c[3][4]; // Let's create a matrix with float data type...
  convert_matrix_to_float(3, 4, (int*)&mat_b, (float*)&mat_c); // storing values of matrix B in matrix C 
  printf("\nMatrix C : \n");
  float_matrix_printer_2d(3, 4, (float*)&mat_c); // This function prints matrix having float values...
  return 0;
}


