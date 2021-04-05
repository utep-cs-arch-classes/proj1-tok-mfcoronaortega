#include <stdio.h>
#include <stdlib.h>

#define MAX 50

//Basi UI code resides in this main.c program

int main(){

  //This is a character array of MAX length of 50
  char str[MAX];
  printf("Welcome to the Tokenizer (enter x to exit)\n");

  // while the exit command is not entered, the string is echoed
  while (*str != 'x'){
    printf("> ");
    fgets(str, MAX, stdin);//gets input

    if(*str != 'x'){ // checks for exit command to echo
      printf("> %s\n", str);
    }
  }
  
  return 0;
}
