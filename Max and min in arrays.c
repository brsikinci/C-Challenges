#include <stdio.h>

int main()
{
	int size;
	int i;
	printf("Enter the size of the array = ");
	scanf("%d", &size);
	int array[size];
	
	printf("Enter the elements = ");
	
	for(i = 0; i < size; i++)
		scanf("%d", &array[i]);
	
	int max = array[0];
	int min = array[0];
	int changer;
	
	for(i = 0; i < size; i++){
		if(max < array[i]){
			changer = max;
			max = array[i];
			array[i] = changer;
		}
		
		if(min > array[i]){
			changer = min;
			min = array[i];
			array[i] = changer;
		}
	}
	
	printf("Max element is = %d\nMin element is = %d", max, min);
	
	return 0;
}
