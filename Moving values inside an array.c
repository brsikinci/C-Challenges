#include <stdio.h>

int main()
{
	int array[15]={1,2,3,4,5,6,7,8,9,0},temp,n=10,i;
	for(i = 0; i < 15; i++)
		printf("%d, ", array[i]);
	
	printf("\n");
	
	for(i = 14;i >= 0;i--)
	{
		array[i]=array[i-1];
	}
	for(i = 0; i < 15; i++)
		printf("%d, ", array[i]);
}
