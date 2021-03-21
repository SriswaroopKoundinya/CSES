#include <stdio.h>

int main() {
  int INPUT;
  scanf("%i", &INPUT);
  printf("%i%s", INPUT, " ");
  while (INPUT != 1){
    if (INPUT%2 == 1){
      INPUT = (INPUT*3)+1;
      if (INPUT != 1){
      printf("%i%s", INPUT, " ");
      }
      else{
        printf("%i", INPUT);
      }
    }
    else{
      INPUT /= 2;
      if (INPUT != 1){
      printf("%i%s", INPUT, " ");
      }
      else{
        printf("%i", INPUT);
      }
    }
  }
}