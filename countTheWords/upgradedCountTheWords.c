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

void type(char s[]){

  int i = 0;
  s[i] = getchar();
  while (s[i] != '\n'){
    i++;
    s[i] = getchar();
  }

  s[i] = '\0';
  
}



int main(){

  char l[50];
  printf("Enter some line of text: ");
  type(l);
  printf("Your text has %d words.\n\n", countTheWords(l));



  printf("Enter multiple lines of text. When finished, press enter twice: \n");
  char s[200];

  _Bool typing = 1;
  int totalWords = 0;
  
  while (typing == 1){

    type(s);

    if (s[0]=='\0') typing = 0;
    else{
      totalWords += countTheWords(s);
    }
     
  }

  printf("Your text has %d words.\n", totalWords);
  
  return 0;
}
