#include <stdio.h>

int main()
{
	int rows;
	int spc;
	int b;
	int i;
	
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	int rows2=rows;
	spc = rows - 1;
	int spc2;
	int checker = 1;
	
	for (int i = 1; i <= rows; i++){
		for (int j = 0; j < spc; j++)
			printf(" ");
		for(int k = 1; k <= 2*i-1; k++ )
			printf("*");
		spc--;
			printf("\n");
	}
	
	for (int a = 1; a < rows; a++){
		for (int b = checker; b > 0; b--)
			printf(" ");
		for (int c = 1; c < 2*rows2-2; c++)
			printf("*");
		
		checker++;
		rows2--;
		printf("\n");
	}
}
