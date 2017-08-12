#include <stdio.h>
#include <stdlib.h>

void editMessageSent(char* message, int size){
  char newMessage[] = "new message";

  if(size > sizeof(newMessage)){
    for(int i = 0; i < sizeof(newMessage); i++){
      message[i] = newMessage[i];
    }
  } else {
    printf("new message is too big");
  }
}

int main(){

  char randomMessage[] = "edit my function";

  printf("old message %s\n\n",
        randomMessage);

  editMessageSent(randomMessage,
                  sizeof(randomMessage));

  printf("New message: %s\n\n",
        randomMessage);
}
