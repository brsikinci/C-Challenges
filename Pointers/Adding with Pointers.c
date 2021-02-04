#include <stdio.h>

int main()
{
	int num1;
	int num2;
	printf("Enter the first number you want to add = ");
	scanf("%d",&num1);
	printf("Enter the second number = ");
	scanf("%d",&num2);
	int *p1 = &num1;
	int *p2 = &num2;
	int sum = *p1 + *p2;
	printf("Their sum is = %d", sum); 
}
