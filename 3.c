#include <stdio.h>

int main(){
  float x = 2.5;
  printf("%f\n\n",x);
  //In case you don't want a bijilion zeros or decimals, you can round off the numbers by typing %.(number of decimals you want AFTER the point)f
  printf("0-decimal : %.0f\n",x);
  printf("1-decimal : %.1f\n",x);
  printf("2-decimal : %.2f\n",x);
  printf("3-decimal : %.3f\n",x);
  return 0;
}
