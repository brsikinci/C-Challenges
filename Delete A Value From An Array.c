#include <stdio.h>

int main()
{
	int array[100] = {0};
	int size;
	int i = 0;
	int deletePosition;
	
	printf("Enter the size of the array = ");
	scanf("%d",&size);
	printf("Enter the elements of the array = ");
	for(i; i < size; i++)
		scanf("%d", &array[i]);
	
	printf("Enter the element you want to delete = ");
	scanf("%d",&deletePosition);
	
	for(i = deletePosition - 1; i < size; i++){
		array[i] = array[i+1];
	}
	
	for(i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	
}
