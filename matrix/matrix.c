#include<stdio.h>
#include"./matrix.h"


int main(){
  int mat_a[3][3];
  matrix_creator_2d(3,3, (int*)&mat_a);
  printf("Created matrix is : \n"); // Checking Created matrix if its same as the user entered.
  matrix_printer_2d(3,3, (int*)&mat_a);
  return 0;
}
