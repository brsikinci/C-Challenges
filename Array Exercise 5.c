#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int number;
	int ctr = 0;
	int ctr2 = 0;
	
	printf("Enter the size of the array = ");
	scanf("%d",&number);
	
	int array[number];
	
	for(i; i < number; i++){
		printf("Element - %d = ",i);
		scanf("%d",&array[i]);
	}
	
	for(i = 0; i < number; i++){
		for (j = i+1; j < number; j++){
			if(array[i]==array[j]){
				ctr++;
				break;
			}
		}
	}
	
	printf("Total number of duplicate elements are = %d ", ctr);
    
	return 0;	
}
