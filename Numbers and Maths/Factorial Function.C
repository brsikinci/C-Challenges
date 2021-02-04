#include <stdio.h>

double factorial (int a);

int main()
{
	int number;
	int factorialSum;
	
	printf("Please enter a number: ");
	scanf("%d",&number);
	
	printf("%lf",factorial(number));
	factorialSum+=factorial(number);
	printf("%d",factorialSum);
}


double factorial (int a){
	int result = 1;
	for (int i = a; i >= 1; i--){
		result*=i;
	}
	return result;
}
