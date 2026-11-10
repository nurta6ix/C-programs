#include <stdio.h>

int isAlphabetic(char c){
  if (c >= 'a' && c <= 'z' || c>='A' && c <= 'Z'){
    return 1;
  }
  return 0;
}

int countTheWords(char s[]){

  _Bool lookingForWord = 1;
  int words = 0;

  for (int i = 0; s[i] != '\0'; i++){
    if (isAlphabetic(s[i]) == 1) {
      
      if (lookingForWord == 1){
        words++;
        lookingForWord = 0;
      }  
    }
    else lookingForWord = 1;  
  }

  return words;
  
}

int main(){

  printf("%d\n", countTheWords("Well, well, well..."));
  
  return 0;
}
