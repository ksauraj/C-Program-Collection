#include<stdio.h>
#include"./matrix.h"


int main(){
  int mat_a[4][3];
  matrix_creator_2d(4,3, (int*)&mat_a);
  printf("\nCreated matrix is : \n"); // Checking Created matrix if its same as the user entered.
  matrix_printer_2d(4,3, (int*)&mat_a);

  // Now lets create a transpose of matrix A.
  int mat_b[3][4];
  transpose_of_matrix(4, 3, (int*)&mat_a, (int*)&mat_b); // transpose_of_matrix('no of rows in org matrix', 'no of cols in org matrix', address of org matrix, address of transpose matrix)
  printf("\nTranspose of given matrix is : \n");
  matrix_printer_2d(3,4, (int*)&mat_b);
  return 0;
}
