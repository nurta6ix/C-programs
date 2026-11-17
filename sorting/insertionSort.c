#include <stdio.h>

void insertionSort(int arr[], int n){

  int key, j;
  for (int i = 1; i < n; i++){

    key = arr[i];
    j = i-1;

    while ( j>=0 && arr[j]>key ){
      arr[j+1] = arr[j];
      j--;
    }

    arr[j+1] = key;

    
  }
  
}

int main(){

  int arr[] = {5,3,5,8,1,9,2};
  insertionSort(arr, 7);

  for (int i = 0; i < 7; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
