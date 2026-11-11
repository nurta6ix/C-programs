#include <stdio.h>

void compareStrings(char s1[], char s2[]){
  while (*s1 == *s2 && *s1 != '\0'){
    s1++;
    s2++;
  }
  if (*s1 == '\0' && *s2 == '\0'){
    printf("Given strings are the same.\n");
  }
  else printf("Given strings are not the same\n");
}
int main(){

  compareStrings("hell", "hello");
  
  return 0;
}
