#include<stdio.h>
#include "matrix.h"

void print_inverse_of_matrix(const int order){
  int orig_mat[order][order];
  float float_mat[order][order], inv_matrix[order][order];
  matrix_creator_2d(order, order, (int*)&orig_mat);
  convert_matrix_to_float(order, order, (int*)&orig_mat, (float*)&float_mat);
  //Make inv_matrix as a Identiy matrix.
  for(int i=0; i<order; i++){
    for(int j=0; j<order; j++){
      if(i==j){
        inv_matrix[i][j]=1;
      }
      else{
        inv_matrix[i][j]=0;
      }
    }
  }
  printf("\n");
  float_matrix_printer_2d(order, order, (float*)&inv_matrix);
  //Find and Apply Elementry Tranformation on both matrix
  printf("\n\nStart of Elementry Tranformation : \n\n");
  int row_counter=0, col_counter=0;
  for(; row_counter<order; row_counter++){
    int cur_row_counter=row_counter;
    int save_row_counter=row_counter;
    if(float_mat[row_counter][col_counter]!=0){
      float divisor=float_mat[row_counter][col_counter];
      printf("\nApplying Transformation R%d -> R%d / %.1f", row_counter+1, row_counter+1, divisor );
      for(int j=0; j<order; j++){
        float_mat[row_counter][j]/=divisor;
        inv_matrix[row_counter][j]/=divisor;
      }
      printf("\nGiven Matrix After Tranformation : \n");
      float_matrix_printer_2d(order, order, (float*)&float_mat);
      printf("\nIdentiy After Tranformation : \n");
      float_matrix_printer_2d(order, order, (float*)&inv_matrix);
      for(row_counter=0;row_counter<order;row_counter++){
        if(row_counter!=save_row_counter){
          double multiplier = float_mat[row_counter][col_counter] / float_mat[cur_row_counter][col_counter];
          printf("\nApplying Tranformation R%d -> R%d - %.1fR%d\n", row_counter+1, row_counter+1, multiplier, cur_row_counter+1);
          for(int j=0; j<order; j++){
            float_mat[row_counter][j]-=float_mat[cur_row_counter][j]*multiplier;
            inv_matrix[row_counter][j]-=inv_matrix[cur_row_counter][j]*multiplier;
          }
      printf("\nGiven Matrix After Tranformation : \n");
      float_matrix_printer_2d(order, order, (float*)&float_mat);
      printf("\nIdentiy After Tranformation : \n");
      float_matrix_printer_2d(order, order, (float*)&inv_matrix);

        }
      }
      row_counter=save_row_counter;
      col_counter++;

    }
    // Swap values of two rows
    else{
      printf("\nApplying Tranformation %dR <-> %dR\n", cur_row_counter+1, cur_row_counter+2);
      for(int j=0; j<order; j++){
        float temp_val=float_mat[cur_row_counter][j];
        float_mat[cur_row_counter][j]= float_mat[cur_row_counter+1][j];
        float_mat[cur_row_counter+1][j]=temp_val;
        temp_val=inv_matrix[cur_row_counter][j];
        inv_matrix[cur_row_counter][j]= inv_matrix[cur_row_counter+1][j];
        inv_matrix[cur_row_counter+1][j]=temp_val;
        row_counter=save_row_counter-1;
      }
    }
  }
  printf("\nFinal Inverse Matrix : \n");
  float_matrix_printer_2d(order, order, (float*)&inv_matrix);
}


int main(){
  int n;
  printf("Enter order of Square Matrix n : ");
  scanf("%d", &n);
  print_inverse_of_matrix(n);
  return 0;
}

