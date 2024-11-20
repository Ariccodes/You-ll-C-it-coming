#include <stdio.h>

int main() {
  //What happens if you assign the function 'printf' to a variable? 
  int x = printf("Do you 'C' it coming?\n");
  printf("%d", x);
  //Ahh it stores the length of the string and also executes the function. 
  return 2;
}

int experiment(){
  //An experiment in trying to understand how returning values work and how they're different from actually printing strings. 
  //'return' returns the value to whoever who called the function. In our case, main() is a special function because our operating system calls the function and so the value is returned to the operating system and not to us or get printed as I originally thought. 
  //So couldn't you just call the function yourself and get the value returned to you? Well technically, yes. But GPT told me it's not a very good idea to call the main function because it's apparently a special function. And some code editors might support calling the main function, some don't, and the rest, crash. 
  int y = main();
  printf("%d", y);
  return 0;
  // And turns our Replit doesn't support calling the main function. 
}
