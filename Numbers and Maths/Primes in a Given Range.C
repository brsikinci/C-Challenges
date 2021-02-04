#include <stdio.h>

int main()
{
	int start;
	int end;
	int counter=0;
	
	printf("Enter the starting point: ");
	scanf("%d",&start);
	printf("Enter the ending point: ");
	scanf("%d",&end);
	
	
	for (int i = start; i <= end; i++){
		for (int j = 2; j <= i/2; j++){
			if(i%j==0)
				counter++;
		}
		
		if (i!=1 && counter==0)
			printf("%d ",i);
		
		counter = 0;
	}
}
