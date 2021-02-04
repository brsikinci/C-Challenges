#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int number;
	int checker;
	
	printf("Enter the size of the array = ");
	scanf("%d",&number);
	
	int array[number];
	
	for(i; i < number; i++){
		printf("Element - %d = ",i);
		scanf("%d",&array[i]);
	}
	
	printf("Unique elements are = ");
	
	for(i = 0; i < number; i++){
		
		for (j = 0; j < number; j++){
				if (i==j)
					continue;
				else if (array[i] == array[j]){
					checker = 0;
					break;
				}
			 	else if(array[i] != array[j])	
			 		checker = 1;
			}
		
		if (checker == 1)
			printf("%d, ", array[i]);
	}
}
