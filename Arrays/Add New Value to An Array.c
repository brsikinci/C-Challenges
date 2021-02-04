#include <stdio.h>

int main()
{
	int size;
	int i;
	int insertedValue;
	int insertPosition;
	int changer;
	printf("Enter the size of the array = ");
	scanf("%d", &size);
	int array[100] = {0};
	
	printf("Enter the elements = ");
	
	for(i = 0; i < size; i++)
		scanf("%d", &array[i]);
	
	printf("Enter the value you want to insert to the array = ");
	scanf("%d",&insertedValue);+
	printf("Enter the position of the new value = ");
	scanf("%d",&insertPosition);
	
	printf("Current values inside the array = ");
	for(i = 0; i < size; i++)
		printf("%d, ",array[i]);
	
	for(i = size; i >= insertPosition-1; i--){
		array[i] = array[i-1];
	}
	
	array[insertPosition-1] = insertedValue;
		
	printf("\n");	
	printf("New array = ");
	for(i = 0; i <= size; i++)
		printf("%d, ",array[i]);
	
}
