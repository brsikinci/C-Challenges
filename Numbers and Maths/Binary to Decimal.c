#include <stdio.h>
#include <math.h>

int main()
{
	int number;
	int counter = 0;
	int digit;
	int convertedNum = 0;
	
	printf("Enter a number = ");
	scanf("%d", &number);
	
	while(number > 0)
	{
		digit = number % 10;
		if(digit == 1)
		{
			convertedNum += pow(2,counter);
		}
		counter++;
		number /= 10;
	}
	
	printf("The binary number in decimal system is = %d", convertedNum);
	
	
}
