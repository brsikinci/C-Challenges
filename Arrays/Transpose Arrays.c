#include <stdio.h>

int main()
{
	int array[100][100];
	int transposeArray[100][100];
	int rows;
	int columns;
	int i;
	int j;
	
	printf("Input the rows and columns of the array (In respect to the given order, also the array must be a square array) = ");
	scanf("%d%d",&rows,&columns);
	
	printf("Enter the elements of the array = ");
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("The array is =\n");
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			printf("%d ",array[i][j]);
			transposeArray[j][i] = array[i][j];
			}
		printf("\n");
	}
	printf("\nThe transposed array is =\n");
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			printf("%d ",transposeArray[i][j]);
		}
		printf("\n");
	}
}
