#include <stdio.h>
#include <stdbool.h>
/*you have to insert this library 
for the boolean data types to work
because the bool data type is not
defined simultaneously with int 
float and other data types. 
If you don't add the library, the 
device doesn't know what on earth a
boolean is.*/

//Booleam values

int main(){
  bool Q1 = true;
  bool Q2 = false;

  //Logic with Boolean

  int result1 = Q1 && Q2;
  int result2 = Q1 || Q2;

  printf("result1: %i\n",result1);
  printf("result2: %i",result2);
  
  return 0;
}
