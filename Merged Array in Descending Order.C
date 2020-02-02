#include <stdio.h>

void bubbleSort (int mergedArray[], int totalSize);
void mergeArrays(int array1[], int size1, int array2[], int size2);

int main()
{
	int i = 0;
	int j = 0;
	int size1;
	int size2;
	int checker;
	
	printf("Enter the size of the first array = ");
	scanf("%d",&size1);
	
	int array1[size1];
	
	printf("Enter the elements of the first array = ");
	
	for(i; i < size1; i++){
		scanf("%d",&array1[i]);
	}
	printf("Enter the size of the second array = ");
	scanf("%d",&size2);
	
	int array2[size2];
	
	printf("Enter the elements of the second array = ");
	
	for(i = 0; i < size2; i++){
		scanf("%d",&array2[i]);
	}
	
	mergeArrays(array1, size1, array2, size2);

}

void bubbleSort (int mergedArray[], int totalSize){
	int pass;
	int changer;
	int j;
	int changeOfOrder = 1;
	
	for(pass = 1; pass < totalSize && changeOfOrder; pass++){
		changeOfOrder = 0;
		for(j = 0; j < totalSize - pass; j++){
			if(mergedArray[j] < mergedArray[j+1]){
				changer = mergedArray[j];
				mergedArray[j] = mergedArray[j+1];
				mergedArray[j+1] = changer;
				changeOfOrder = 1;
			}
		}
	
}
}
void mergeArrays(int array1[], int size1, int array2[], int size2)
{
	int totalSize = size1 + size2;
	int merge[totalSize];
	int i = 0;
	int j = 0;	
	for(i; i < size1; i++){
		merge[i] = array1[i];
	}
	i = size1;
	for(j = 0; j < size2; j++){
		merge[i+j] = array2[j];
	}
	
	bubbleSort(merge, totalSize);
	
	printf("The merged array in descending order is = ");	
	for(i = 0; i < totalSize; i++){
		printf("%d, ", merge[i]);
	}
	
}
	
	
