#include <stdio.h>

double factorial(int y);

int main()
{
	int number;
	int counter=0;
	int a =0;
	int factorialSum=0;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	int x = number;	
	int c = number;
	
	while (x>=1){ //Checks how many digits the given value has.
		x/=10;
		counter++;
	}
	
	for (int i=1; i <= counter; i++){ //Checks if the given value is strong or not.
		a=c%10;
		c/=10;
		factorialSum += factorial(a);
	}
	
	if (factorialSum == number)  //Prints the result of the calculation above.
		printf("%d is a strong number",number);
	
	else
		printf("%d is not a strong number\n",number);
	}



double factorial (int y){
	
	double result=1;
	
	for (int j = 1; j <= y; j++){
		result*=j;
	}
	
	return result;
}
