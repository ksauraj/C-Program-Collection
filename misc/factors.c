#include <stdio.h>
#include "factors.h"
#include "../matrix/matrix.h"

int main(){
  int a, b, c, hcf;
  printf("Enter values of a : ");
  scanf("%d", &a);
  printf("Enter values of b : ");
  scanf("%d", &b);
  c = hcf_of_two_numbers(a,b);
  printf("HCF of %d and %d is : %d", a, b, c);
  int my_arr[6];
  matrix_creator_2d(1, 6, (int*)&my_arr);
  hcf = hcf_in_arrays((int*)&my_arr, 4);
  printf("\nHCF is : %d", hcf);
  return 0;
}
