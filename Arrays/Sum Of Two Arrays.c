#include <stdio.h>

int main()
{
	int i;
	int j;
	int array[2][2];
	int array2[2][2];
	int sum[2][2] = {0};
	int rows1 = 0;
	int rows2 = 0;
	int columns1 = 0;
	int columns2 = 0;
	
	printf("Enter the elements of the first array = ");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++)
			scanf("%d",&array[i][j]);
	}
	
	printf("Enter the elements of the second array = ");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++)
			scanf("%d",&array2[i][j]);
	}
	
	printf("First array=\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	printf("Second array=\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", array2[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			sum[i][j] = array[i][j] + array2[i][j]; 
		}
	}
	
	printf("Sum of the given arrays=\n");
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}
	
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			if(i == 0)
				rows1 += sum[i][j];
			else
				rows2 += sum[i][j];
			
		}
	}
	printf("Sum of rows (sum array) = %d and %d\n",rows1, rows2);
	
	for(j = 0; j < 2; j++){
		for(i = 0; i < 2; i++){
			if(j == 0)
				columns1 += sum[i][j];
			else
				columns2 += sum[i][j];
		}
	}
	printf("Sum of columns (sum array) = %d and %d", columns1, columns2);
	
}
