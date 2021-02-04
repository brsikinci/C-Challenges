#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	char searcher[20];
	char *strPtr;
	int counter = 0;
	
	printf("Enter a string: ");
	fgets(string, sizeof string, stdin);
	printf("Enter the word to be searched: ");
	scanf("%s", searcher);
	
	strPtr = strstr(string, searcher);
	
	while (strPtr != NULL)
	{
		counter++;
		strPtr++;
		strPtr = strstr(strPtr, searcher);
	}
	
	printf("The word \"%s\" occured %d times in the given string.", searcher, counter);
	
	return 0;
}
