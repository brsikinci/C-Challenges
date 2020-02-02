#include <stdio.h>

int main()
{
	int i = 0;
	int number;
	
	printf("Enter the size of the array = ");
	scanf("%d",&number);
	
	int array[number];
	int array2[number];
	
	for(i; i < number; i++){
		printf("Element - %d = ",i);
		scanf("%d",&array[i]);
	}
	
	printf("First array = ");
	for(i = 0; i < number; i++){
		printf("%d, ", array[i]);
	}
	
	for(i = 0; i < number; i++){
		array2[i] = array[i];
	}
	
	printf("Second array = ");
	
	for(i = 0; i < number; i++){
		printf("%d, ", array2[i]);
	}
	
	return 0;
}
