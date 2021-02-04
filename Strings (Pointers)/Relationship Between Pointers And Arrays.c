#include <stdio.h>
#include <string.h>
#define SIZE1 25
#define SIZE2 15
int main()
{
	char x[] = "Happy Birthday To You";
	char y[SIZE1];
	char z[SIZE2];
	
	printf("%s%s\n%s%s","The original array X: ", x,"The array copied into Y: ", strcpy(y,x));
	
	strncpy(z, x, SIZE2 );
	puts("\nThe string in array Z: ");
	printf("%s", z);
}
