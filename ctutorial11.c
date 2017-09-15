#include <stdio.h>
#include <stdlib.h>

int main(){

  FILE *pFile;

  pFile = fopen("randomwords.txt", "r+");

  char buffer[1000];

  if(!pFile){

    printf("Error: Couldn't read from file");

    return 1;
  }

  fputs("Messing with strings", pFile);

  fseek(pFile, 12, SEEK_SET);

  fputs(" Files ", pFile);

  fseek(pFile, 0, SEEK_SET);

  fseek(pFile, 0, SEEK_END);

  long numberOfBytes = ftell(pFile);

  printf("Number of Bytes in File : %d\n",
    numberOfBytes);

  fseek(pFile, -20, SEEK_CUR);

  printf("Success reading from file\n");

  while(fgets(buffer, 1000, pFile) != NULL){
    printf("%s", buffer);
  }

  printf("\n");

  if(fclose(pFile) != 0){
    printf("Error: File not closed\n");
  }

  return 0;
}

/// IDEA: PROGRAM THAT WRITES WEATHER/OTHER STATS TO FILE
