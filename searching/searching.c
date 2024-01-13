#include<stdio.h>
#include "searching.h"

int main(){
  int n, search_element;
  printf("Enter number of elements for 1-D array : ");
  scanf("%d",&n);
  int myarr[n];
  for(int i=0; i<n; i++){
    printf("Enter values for element %d : ", i);
    scanf("%d", &myarr[i]);
  }
  printf("Enter element to search in array using linear search : ");
  scanf("%d", &search_element);
  int index;
  index = linear_search_1D(10, search_element, (int*)&myarr);
  if (index==-1){
    printf("Element not found in given array.");
  }
  else {
    printf("Element found at index %d", index);
  }
  return 0;
}
