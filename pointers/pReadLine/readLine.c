#include <stdio.h>

void readLine(char s[]){

  *s = getchar();
  while (*s != '\n'){
    s++;
    *s = getchar();
  }
  *s = '\0';
  
}

int main(){

  char s[20];

  readLine(s);

  printf("You entered: %s\n", s);

  return 0;
}
