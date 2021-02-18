#include <stdio.h>

int x,y,sum;

int addition(int x, int y){ //The addition function that sum all the numbers from X to Y.

	for(int i=x; i<=y; i++){ //THis for loop is used to switch between all the numbers from X to Y.
		sum = sum + i; //Adding all the numbers together.
	}

return(sum);
}


int main(){

	printf("Enter the value of X: "); //Asking the user for the value of X.
	scanf("%d",&x); //Reading the value from the user.

	printf("Enter the value of Y: "); //Asking the user for the value of Y.
	scanf("%d",&y); //Reading the value from the user.

	addition(x, y); //Calling the addition function.

	printf("The sum of all the numbers from %d to %d is: %d\n",x, y, sum); //Printing the final result for the user.

return(0);
}
