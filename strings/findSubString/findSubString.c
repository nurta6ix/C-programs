#include <stdio.h>

void findSubString(char s1[], char s2[]){
  
  int i, j;
  int found = 0;
  
  for (i = 0; s1[i] != '\0' && found != 1; i++){

    j = i;
    while(s1[j] == s2[j-i] && s2[j-i] != '\0'){
        j++;
    }
    
    if (s2[j-i] == '\0'){
       printf("Substring exists. It starts from the character number %d\n", i+1);
       found = 1;
    }
  }

  if (found == 0) printf("The %s is not a substring of %s", s2, s1);
  
}

int main(){

  char s1[20], s2[20];

  printf("Enter a word and then a word smaller than the first. I will tell whether it is a substring or not:\n");
  printf("Word 1: ");
  scanf("%s", s1);
  printf("Word 2 (substring): ");
  scanf("%s", s2);
  findSubString(s1, s2);

  return 0;
}
