#include <stdio.h>

int main()
{
	int size;
	int i;
	
	printf("Enter the size of the array = ");
	scanf("%d", &size);
	
	int array[size];
	
	printf("Enter the elements of the array = ");
	
	for(i = 0; i < size; i++)
		scanf("%d", &array[i]);
		
	for(i = 0; i < size; i++){
		if(array[i] + 1 < array[i+1]){
			printf("The smallest missing number is = %d", array[i]+1);
			break;
		}
			
	}
}
