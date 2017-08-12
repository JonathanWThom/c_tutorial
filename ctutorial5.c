#include <stdio.h>

struct dogsFavs{

  char *food;
  char *friend;

};

typedef struct dog{

  const char *name;
  const char *breed;
  int avgHeightCm;
  int avgWeightLbs;

  struct dogsFavs favoriteThings;

} dog;

void setDogWeightPtr(dog *theDog, int newWeight){

  (*theDog).avgWeightLbs = newWeight;

  printf("The weight was change to %d\n\n", theDog->avgWeightLbs);

}

void getDogsFavs(dog theDog){

  printf("\n");

  printf("%s loves %s and his friend is%s\n\n", theDog.name, theDog.favoriteThings.food,
  theDog.favoriteThings.friend);

}

int main(){

  dog benji = {"Benji", "Silky Terrier", 25, 9, {"Meatballs", "Joe Camp"}};

  setDogWeightPtr(&benji, 11);

  printf("The weight in main() %d\n\n", benji.avgWeightLbs);

}
