#include <stdio.h>

int main(){

    //Calculating Factorial using Loop

    int factorial=1;
    int x,i;
    printf("Factorial Calculator \n----------------------------------\nEnter a Number:");
    scanf("%i",&x);

    if(x<0){
        printf("The factorial of negative numbers don't exist.");
        return 0;
    }
    else if(x==0 || x==1){
    	printf("The factorial of %i is %i",x,factorial);
    	return 0;
    }
    else{
    	for(i=1;i<=x;i++){
    		factorial = factorial*i;
		}
	}
	
    printf("The factorial of %i is %i",x,factorial);
    return 0;
}
