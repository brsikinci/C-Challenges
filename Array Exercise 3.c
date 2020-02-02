#include <stdio.h>

int main()
{
	int i = 0;
	int number;
	int sum = 0;
	
	printf("Enter the size of the array = ");
	scanf("%d",&number);
	
	int array[number];
	
	for(i; i < number; i++){
		printf("Element - %d = ",i);
		scanf("%d",&array[i]);
		sum += array[i];
	}
	
	printf("Sum of the elements in the array is = %d", sum);
}
