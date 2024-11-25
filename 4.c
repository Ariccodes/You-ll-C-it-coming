#include <stdio.h>

//factorial calculator

int main(){
  int N=6;
  int factorial=1;
  for(int i=1;i<N;i++){
    factorial = i*factorial ;
  }
  printf("%d", factorial);
  return 0;
}
