#include <stdio.h>

void selectionSort(int arr[], int n){

  int min_ind, temp;
  for (int i = 0; i < n - 1; i++){
    min_ind = i;

    for (int j = i+1; j < n; j++){
      if (arr[j] < arr[min_ind]){
        min_ind = j;    
      }

    temp = arr[min_ind];
    arr[min_ind] = arr[i];
    arr[i] = temp;

    }
  }  
}

int main(){

  int arr[] = {5, 3, 8, 9, 10, 1};
  selectionSort(arr, 6);

  for(int i = 0; i < 6; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
