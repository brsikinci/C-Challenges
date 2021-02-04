#include <stdio.h>

int main()
{
	int i = 0;
	
	int array[10];
	
	for(i; i < 10; i++){
		printf("Element - %d = ",i);
		scanf("%d",&array[i]);
	}
	
	printf("Elements of the array = ");
	
	for(i = 0; i < 10; i++){
		printf("%d, ", array[i]);
	}
	
	return 0;
}
