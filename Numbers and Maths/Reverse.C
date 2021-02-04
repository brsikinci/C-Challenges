#include <stdio.h>

int main()
{
	int number;
	int counter=0;
	int a =0;
	
	printf("Enter a number: ");
	scanf("%d",&number);
	int x = number;	
	
	while (x>=1){
		x/=10;
		counter++;
	}
	
	for (int i=1; i <= counter; i++){
		a*=10;
		a+=number%10;
		number/=10;
		
	}
	
	printf("The reverse of the number you have entered is: %d", a);
}
