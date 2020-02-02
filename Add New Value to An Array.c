#include <stdio.h>

int main()
{
	int size;
	int i;
	int insertedValue;
	int insertPosition;
	printf("Enter the size of the array = ");
	scanf("%d", &size);
	int array[size];
	
	printf("Enter the elements = ");
	
	for(i = 0; i < size; i++)
		scanf("%d", &array[i]);
	
	printf("Enter the value you want to insert to the array = ");
	scanf("%d",&insertedValue);
	printf("Enter the position of the new  value = ");
	scanf("%d",&insertPosition);
	
}
