#include <stdio.h>

void bubbleSort (int array[], int size);

int main()
{
	int size;
	int i = 0;
	
	printf("Please enter the size of the array = ");
	scanf("%d",&size);
	
	int array[size];
	
	printf("Enter the elements of the array = ");
	
	for (i; i < size; i++){
		scanf("%d", &array[i]);
	}
	
	printf("Array in descending order = "); 
	bubbleSort(array, size);
	
	return 0;
}

void bubbleSort (int array[], int size)
{
	int pass;
	int changer;
	int j;
	int changeOfOrder = 1;
	
	for(pass = 1; pass < size && changeOfOrder; pass++){
		changeOfOrder = 0;
		for(j = 0; j < size - pass; j++){
			if(array[j] < array[j+1]){
				changer = array[j];
				array[j] = array[j+1];
				array[j+1] = changer;
				changeOfOrder = 1;
			}
		}
	}
	
	for(j = 0; j < size; j++){
		printf("%d, ",array[j]);
	}
}

