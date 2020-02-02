#include <stdio.h>

int wage (int day);

int main ()
{
	int input;
	
	printf("Enter the number of days: ");
	scanf("%d",&input);
	int sum = 0;
	int checker = input;
	for (int i = 1; i <= checker; i++){
		sum += wage(input);
		input--;
	} 
		
	printf("%d",sum);
}

int wage (int day)
{
	int result;
	
	if (day == 1){
		return 3;
	}
	
	else
	{
		return wage(day-1) * 2;
	}

	
}
