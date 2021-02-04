#include <stdio.h>

int main()
{
	int array[10];
	int frequency[100] = {0};
	int i;
	int j;
	
	printf("Elemanlari girin: ");
	for (i = 0; i < 10; i++)
		scanf("%d",&array[i]);
	
	for (i = 0; i < 10; i++)
		frequency[array[i]]++;
	
	for(i = 0; i < 10; i++){
		for(j = 0; j < 10; j++){
			if(array[j] == array[i] && i != j)
				break;
			if(j == i)
			    printf("%d sayisindan %d tane\n", array[i], frequency[array[i]]);
		}
		
	}
	
}
