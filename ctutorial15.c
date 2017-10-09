#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int baseToDecimal(char* number, int baseFrom, int sizeOfNumber){

  int result = 0;
  int toThePowerOf = 0;

  for(int i = (sizeOfNumber-2); i >= 0; i--){

    if(isalpha(number[i])){
      int charCode = ((int)tolower(number[i])) - 87;
      result += charCode * pow(baseFrom, toThePowerOf);
    } else {
      result += (number[i] - '0') * pow(baseFrom, toThePowerOf);
    }

    toThePowerOf++;
  }

  printf("%s in the base %d equals %d in base 10\n", number, baseFrom, result);

  return result;
}


char * convertBase(unsigned int numberToConvert, int base, char *pConvertedNumber){
  char allValues[] = "0123456789abcdef";

  if(base < 2 || base > 16){
    printf("Enter a number between 2 and 16\n");
    exit(1);
  }

  pConvertedNumber[32] = '\0';

  do{
    int value = numberToConvert % base;

    pConvertedNumber = pConvertedNumber - 1;

    *pConvertedNumber = allValues[value];

    numberToConvert /= base;

  }while(numberToConvert != 0);

  return pConvertedNumber;
}

int main(void){
  unsigned int numberSix = 6;
  unsigned int numberSeven = 7;

  char *pConvertedNumber;
  pConvertedNumber = malloc(33 * sizeof(char));

  unsigned int analyzeMyBits = 170; //10101010
  unsigned int theMask = 15; // 00001111
  unsigned int last4Bits = analyzeMyBits & theMask;

  printf("Last 4 Bits: %s\n", convertBase(last4Bits, 2, pConvertedNumber));

  free(pConvertedNumber);
  return 0;
}
