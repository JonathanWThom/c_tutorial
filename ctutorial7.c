#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void noMoreNewline(char* theString){

  char * isANewline;

  isANewline = strrchr(theString, '\n');

  if(isANewline){

    *isANewline = "\0";

  }

}

void makeLowerCase(char* theString){

  int i = 0;

  while(theString[i]){

    theString[i] = tolower(theString[i]);
    i++;

  }

}


void getCharInfo(){

  char theChar;

  while((theChar = getchar()) != '\n'){

    printf("Letter or Number %d\n\n",
            isalnum(theChar));

    printf("Alphabetic Char %d\n\n",
            isalpha(theChar));

    printf("Standard Blank %d\n\n",
            isblank(theChar));

    printf("Alphabetic Char %d\n\n",
            iscntrl(theChar));

    printf("Number char %d\n\n",
            isdigit(theChar));

   printf("Anything but space %d\n\n",
          isgraph(theChar));

    printf("Lower case %d\n\n",
            islower(theChar));

    printf("Upper case %d\n\n",
            isupper(theChar));

   printf("Punctuation %d\n\n",
          ispunct(theChar));

    printf("Any space %d\n\n",
           isspace(theChar));



  }


}

int main(){

  getCharInfo();

}
