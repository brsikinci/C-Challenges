#include <stdio.h>

int main ()
{
	int size;
	int i;
	printf("Enter the size of the array = ");
	scanf("%d", &size);
	int array[size];
	int odd[100];
	int even[100];
	
	printf("Enter the elements = ");
	
	for(i = 0; i < size; i++)
		scanf("%d", &array[i]);
	int evens = 0;
	int odds = 0;
	for(i = 0; i < size; i++){
			
		if(array[i] % 2 == 0){
			even[evens] = array[i];
			evens++;
		}
		
		else
		{
			odd[odds] = array[i];
			odds++;
		}
	}
	
	printf("Evens in the given array = ");
	for(i = 0; i < evens; i++)
		printf("%d, ",even[i]);
		
	printf("\n");
		
	printf("Odds in the given array = ");
	for(i = 0; i < odds; i++)
		printf("%d, ",odd[i]);
		
	return 0;
}
