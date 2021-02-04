#include <stdio.h>

void add(int *pt1, int *pt2);

int main()
{
	int num1;
	int num2;
	
	printf("Enter the first number = ");
	scanf("%d",&num1);
	printf("Enter the second number = ");
	scanf("%d",&num2);
	add(&num1, &num2);
	return 0;
}

void add(int *pt1, int *pt2)
{
	int sum = *pt1 + *pt2;
	printf("Their sum is = %d ", sum);
}
