#include <stdio.h>

int main()
{
	//Basic Declaration of a Pointer
	int *pointer;
	int number;
	
	printf("Please enter a number for the pointer to hold its assigned variable's address = ");
	scanf("%d", &number);
	pointer = &number;
	printf("The number value that the pointer holds is %d, and the address is %p", *pointer, pointer);
}
