#include <stdio.h>
#include <stdlib.h>

char* strCpy(char from[]){
  int len = 0, i = 0;
  for (i = 0; *(from+i) != '\0'; i++){
    len++;
  }
  len++;

  char *cpy = malloc(len*sizeof(char));


  for (i = 0; i < len; i++){
    *(cpy+i) = *(from+i);
  }

  return cpy;
}

int main(){

  char s[] = "hello";

  char *cpy = strCpy(s);

  printf("%s\n", cpy);

  free(cpy);
  
  
}
