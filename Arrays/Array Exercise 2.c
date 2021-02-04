#include <stdio.h>

int main()
{
	int i = 0;
	int number;
	
	printf("Enter the size of the array = ");
	scanf("%d",&number);
	
	int array[number];
	
	for(i; i < number; i++){
		printf("Element - %d = ",i);
		scanf("%d",&array[i]);
	}
	
	for(i = number - 1; i >= 0; i--){
		printf("%d, ", array[i]);
	}
	
	return 0;
}
