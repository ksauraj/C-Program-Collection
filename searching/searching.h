#include <stdio.h>

int linear_search_1D(int no_of_elements, int search_element, int *add){
  for (int i=0; i<no_of_elements; i++){
    if(*add == search_element){
      return i;
      break;
    }
    else if (i==no_of_elements-1) {
      return -1;
      break;
    }
    add++;
  }
}
