#include <stdio.h>
#define SIZE 80

void reverse (const char * const strPtr);

int main()
{
	char string[SIZE];
	
	puts("Please enter a string: ");
	
	fgets(string, SIZE, stdin);
	
	puts("\nThe string you have entered printed backwards (using recursion) is: ");
	reverse(string);
	
	return 0;
}

void reverse (const char * const strPtr)
{
	
	if ('\0' == strPtr[0])
		return;
	else
	{
		reverse(&strPtr[1]);
		putchar(strPtr[0]);
	}

}
