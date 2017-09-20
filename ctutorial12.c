#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void){

  FILE *pFile;

  size_t dataInFile;

  long fileSize;

  pFile = fopen("randomnums.bin", "rb+");

  if(pFile == NULL){
    perror("Error occurred");
    printf("Error code %d\n", errno);

    printf("File being created\n\n");

    pFile = fopen("randomnumss.bin", "wb+");

    if(pFile == NULL){
      perror("Error occurred");
      printf("Error code %d\n", errno);
      exit(1);
    }
  }

  int randomNumbers[20];

  for(int i = 0; i < 20; i++){
    randomNumbers[i] = rand() % 100;
    printf("Number %d is %d\n",
      i, randomNumbers[i]);
  }

  fwrite(randomNumbers, sizeof(int), 20, pFile);

  long randomIndexNumber;
  int numberAtIndex;

  printf("Which random number do you want?");

  scanf("%ld", &randomIndexNumber);

  fseek(pFile, randomIndexNumber * sizeof(int),
    SEEK_SET);

  fread(&numberAtIndex, sizeof(int), 1, pFile);

  printf("The random number at index %d is %d\n",
    randomIndexNumber, numberAtIndex);

  fclose(pFile);

  return 0;
}
