#include <stdio.h>

int main()
{
	int m = 10;
	printf("The value of the variable number is = %d\nIts address is %p",m, &m);
	printf("\n");
	printf("Now the address of the variable number will be assigned to the pointer 'ab'\n");
	int *ab = &m;
	printf("Address of the pointer ab = %p \nContent of pointer ab = %d", ab, *ab);
	m = 34;
	printf("\nThe value of m is 34 now\n");
	printf("Address of the pointer hello = %p \nContent of pointer hello = %d", ab, *ab);
	printf("\nThe pointer variable ab is assigned with the value 7 now.");
	*ab = 7;
	printf("Value of m = %d",*ab);
	printf("\nAdress of m = %p",&m);
	
	printf("\nAddress of ab is %p", &ab);
}
