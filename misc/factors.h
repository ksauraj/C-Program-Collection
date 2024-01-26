#include "searching.h"
#include <stdbool.h>

int hcf_of_two_numbers(int a, int b){
  int h_factor=1, num;
  if(a>b){
    num = b;
  }
  else if(a<b){
    num = a;
  }
  else{
    return a;
  }
  for(int i=2;i<=num;i++){
    if(a%i==0 && b%i==0){
      h_factor=i;
    }
  }
  return h_factor;
}

int hcf_in_arrays(int *arr, int len){
  bool checker = false;
  int lowest_num, hcf=1;
  int *resetter = arr;
  lowest_num = find_lowest_in_array(arr, len); 
  for (int i=2; i<lowest_num+1; i++){
    for(int j=0; j<len; j++, arr++){
      if(*arr%i==0){
        checker= true;
      }
      else{
        checker = false;
        break;
      }
    }
    if(checker == true){
      hcf = i;
    }
    arr = resetter;
  }
  return hcf;
}
