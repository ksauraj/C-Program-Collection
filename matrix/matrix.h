#include<stdio.h>
// Author : KSAURAJ ( SAURAJ KUMAR SINGH )
// Header file for doing multiple operations on matrix in C using arrays.
// Just for personal use. 

static void matrix_creator_2d(int n_rows, int n_col, int *matrix){
  int matrix_a[n_rows][n_col];
  for(int i=0; i < n_rows; i++){
    for(int j=0; j < n_col; j++){
      printf("Enter the value at position row %d, column %d in the matrix : ", i, j);
      scanf("%d", &matrix_a[i][j]);
    }
  }
  //Copy values to given matrix
  for(int i=0; i < n_rows; i++){
    for(int j=0; j < n_col; j++){
      *matrix = matrix_a[i][j];
      matrix++;
    }
  }
  //Print values of created matrix
  printf("\nMatrix created with following Values : \n");
  for(int i=0; i < n_rows; i++){
    for(int j=0; j < n_col; j++){
      printf("%d ", matrix_a[i][j]);
    }
    printf("\n");
  }
}

static void matrix_printer_2d(int n_rows, int n_cols, int *matrix){
  for(int i=0; i < n_rows; i++){
    for(int j=0; j < n_cols; j++){
      printf("%d ", *matrix);
      matrix++;
    }
    printf("\n");
  }

}

static void float_matrix_printer_2d(int n_rows, int n_cols, float *matrix){
  for(int i=0; i < n_rows; i++){
    for(int j=0; j < n_cols; j++){
      printf("%.2f ", *matrix);
      matrix++;
    }
    printf("\n");
  }

}

static void double_matrix_printer_2d(int n_rows, int n_cols, double *matrix){
  for(int i=0; i < n_rows; i++){
    for(int j=0; j < n_cols; j++){
      printf("%.8f ", *matrix);
      matrix++;
    }
    printf("\n");
  }

}

static void transpose_of_matrix(int n_rows_org_mat, int n_cols_org_mat, int *matrix, int *t_matrix){
  // This function finds transpose of given matrix a and stores in matrix b.
  int *reference_mat_add, *reference_t_mat_add;
  reference_t_mat_add = t_matrix;
  for(int i=0; i<n_rows_org_mat; i++){
    for(int j=0; j<n_cols_org_mat; j++){
      *t_matrix = *matrix;
      matrix++;
      t_matrix+=n_rows_org_mat; 
    }
    reference_t_mat_add++;  
    t_matrix=reference_t_mat_add;
  }
}


static void convert_matrix_to_float(int n_rows_org_mat, int n_cols_org_mat, int *matrix, float *f_matrix){
  // This function converts values of given matrix A from integer type to floating point values and stores in given matrix B.
  float *reference_f_mat_add = f_matrix;
  for (int i = 0; i<(n_rows_org_mat*n_cols_org_mat); i++){
    *f_matrix = (float)*matrix;
    f_matrix++;
    matrix++;
  }
  printf("\nGiven matrix stored with these floating point values : \n"); 
  float_matrix_printer_2d(n_rows_org_mat, n_cols_org_mat, reference_f_mat_add);
}

static void convert_matrix_to_double(int n_rows_org_mat, int n_cols_org_mat, int *matrix, double *f_matrix){
  // This function converts values of given matrix A from integer type to floating point values and stores in given matrix B.
  double *reference_f_mat_add = f_matrix;
  for (int i = 0; i<(n_rows_org_mat*n_cols_org_mat); i++){
    *f_matrix = (double)*matrix;
    f_matrix++;
    matrix++;
  }
  printf("\nGiven matrix stored with these double point values : \n"); 
  double_matrix_printer_2d(n_rows_org_mat, n_cols_org_mat, reference_f_mat_add);
}



