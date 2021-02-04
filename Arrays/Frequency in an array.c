#include <stdio.h>

int main()
{
	int frequency[100] = {0};
	int size;
	int i;
	printf("Enter the size of the array = ");
	scanf("%d", &size);
	int array[size];
	printf("Enter the elements of the array = ");
	
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < size; i++){
		++frequency[array[i]];
	}
	
	for(i = 0; i < 100; i++){
		if(frequency[i] != 0){
			printf("%d occurs %d times\n",i,frequency[i]);
		}
	}
	
	return 0;
}
