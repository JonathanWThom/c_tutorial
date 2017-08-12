#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int globalVar = 0;

int addTwoInts(int num1, int num2){

  return num1 + num2;

}

int changeVariables(){

  int age = 40;

  printf("age inside of function = %d\n\n",
        age);

  globalVar = 100;

  printf("globalvar inside of function = %d\n\n",
        globalVar);

}

int main(){

  printf("\n");

  int total = addTwoInts(4, 5);

  printf("the sum is %d\n\n", total);

  int age = 10;

  globalVar = 50;

  printf("age before a call to the function = %d\n\n",
        age);

  printf("globalvar before a call to the function = %d\n\n",
        globalVar);

  changeVariables();

  printf("age after a call to the function = %d\n\n",
        age);

  printf("globalvar after a call to the function = %d\n\n",
        globalVar);


}
