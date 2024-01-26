
int find_greatest_in_array(int *arr, int len){
  int num=*arr;
  for(int i=0; i<len; i++, arr++){
    if (*arr > num){
      num = *arr;
    }
  }
  return num;
}

int find_lowest_in_array(int *arr, int len){
  int num=*arr;
  for(int i=0; i<len; i++, arr++){
    if (*arr < num){
      num = *arr;
    }
  }
  return num;
}
