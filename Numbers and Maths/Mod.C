#include <stdio.h>
#include <locale.h> 

int mod(int array[], int size);

int main()
{
	setlocale(LC_ALL,"Turkish"); 
	
	int array[10]={0};
	
	printf("10 elemanlý A dizisinin elemanlarýný giriniz: ");
	
	for(int i = 0; i < 10; i++)
		scanf("%d",&array[i]);
	
	printf("A dizisinde en çok bulunan sayý: %d", mod(array, 10));
	
	return 0;
}

int mod(int array[], int size)
{
	int j;
	int frequency[100] = {0};
	int mod = 0;
	
	for(j = 0; j < size; j++)
		frequency[array[j]]++;
		
	for(j = 0; j < 100; j++)
		if(frequency[j] > frequency[mod])
			mod = j;
	
	return mod;		
		
}
