#include <stdio.h>

int greatestCommonDivisor(int min, int num1, int num2);

int main()
{
	int num1;
	int num2;
	int min;
	int gcd;
	
	printf("Enter the first number: ");
	scanf("%d",&num1);
	printf("Enter the second number: ");
	scanf("%d",&num2);
	
	if(num1 < num2)
		min = num1;
	else 
		min = num2;
	
	gcd = greatestCommonDivisor(min, num1, num2);
	
	printf("Greatest common divisor is: %d", gcd);
	
	return 0;
}

int greatestCommonDivisor(int min, int num1, int num2)
{
	if(num1 % min == 0 && num2 % min == 0)
		return min;
	else
		return greatestCommonDivisor(min - 1, num1, num2);
}
