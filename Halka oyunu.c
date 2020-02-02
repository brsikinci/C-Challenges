#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"Turkish"); 
	srand(time(NULL));
	int atislar[40];
	int i;
	int vurulanHalka;
	int frekans[13] = {0};
	
	for(i=0; i < 40; i++){
		vurulanHalka = rand()%12 + 1;
		atislar[i] = vurulanHalka;
		printf("%d. atýþ, vurulan halka = %d\n", i+1, vurulanHalka); 
	}
		
	for(i=0; i < 40; i++)
		frekans[atislar[i]]++;
	
	int enCokVurulan = 0;
	
	for(i=0; i < 13; i++){
		if(frekans[i] > frekans[enCokVurulan]){
			enCokVurulan = i;
		}
	}
	
	printf("En çok vurulan halka = %d, Vurulma sayýsý = %d", enCokVurulan, frekans[enCokVurulan]);
}
