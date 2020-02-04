#include <stdio.h>

int main()
{
	int size;
	int i;
	int j;
	int min1;
	int min2;
	
	printf("Enter the size of the array = ");
	scanf("%d", &size);
	
	int array[size];
	
	printf("Enter the elements of the array = ");
	
	for(i = 0; i < size; i++)
		scanf("%d", &array[i]);
	
	int min = array[0] + array[1];
	
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			if(i == j)
				continue;
			if(array[i] + array[j] <=  min){
				min = array[i] + array[j];
				min1 = array[j];
				min2 = array[i];
			}
		}
	}
	
	printf("The two elements with sums closer to zero is %d and %d. Their sum is %d", min1, min2, min);
	
}
