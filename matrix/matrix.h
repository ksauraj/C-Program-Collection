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
  printf("Matrix created with following Values : \n");
  for(int i=0; i < n_rows; i++){
    for(int j=0; j < n_col; j++){
      printf("%d ", matrix_a[i][j]);
    }
    printf("\n");
  }
  //return 0;
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


