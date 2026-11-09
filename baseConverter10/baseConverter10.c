#include <stdio.h>

int main(){

  int toConvert, base, index = 0;
  const int bases[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
  int converted[64];

  printf("Enter the number to convert: ");
  scanf("%d", &toConvert);
  printf("Enter the base: ");
  scanf("%d", &base);

  while(toConvert > 0){
    converted[index] = toConvert % base;
    toConvert /= base;
    index++;
  }

  for (--index; index >= 0; index--){
    printf("%c", bases[converted[index]]);
  }
  printf("\n");
  

  return 0;
}
