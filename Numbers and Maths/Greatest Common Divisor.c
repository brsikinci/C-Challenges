#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int i;
	int min;
	int gcd;
	
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	if(num1 < num2)
		min = num1;
	else
		min = num2;
	
	for(i = 1; i <= min/2; i++){
		if(num1 % i == 0 && num2 % i == 0)
			gcd = i;
	}
	
	printf("Greatest common divisor is: %d", gcd);
}
