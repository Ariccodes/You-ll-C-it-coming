#include <stdio.h>

int main(){
  /*This is a multi line comment. 
  It's handy to remember tye syntax 
  */
  int nothing;
  //What happens if you print a variable with no value inside of it? 
  //My guess is that they'll print a blank space. 
  printf("%d", nothing);
  //Wtf
  // it apparently prints 36456824

  /*According to gpt, 
  In C, when you declare a variable (like int nothing;) without initializing it, it contains garbage values. This means the variable holds whatever value happens to be in that memory location at the time, which could be any random number.

Printing such an uninitialized variable using printf (in this case, %d for an integer) will display that garbage value.
  */
}
