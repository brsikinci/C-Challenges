#include <stdio.h>

int main()
{
	int start;
	int end;
	int sum=0;
	
	printf("Enter the starting point: ");
	scanf("%d",&start);
	printf("Enter the ending point: ");
	scanf("%d",&end);
	
	for(int i = start; i <= end; i++){
		for(int j = 1; j < i; j++){
			if(i%j==0){
				sum+=j;
			}
		}
		if (sum==i){
			printf("%d",sum);
			printf("\n");
		}
		   
		
		sum=0;
	}
	
   
}
