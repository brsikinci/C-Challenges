#include <stdio.h>

int main()
{
	int num1;
	int num2;
	int hcf = 1;
	int limiter;
	
	printf("Please enter the first number: ");
	scanf("%d",&num1);
	printf("Please enter the second number: ");
	scanf("%d",&num2);
	
	int constantNum1 = num1;
	int constantNum2 = num2;
	
	if(num1 < num2)
		limiter=num1/2;
	else
		limiter = num2/2;
		
	for (int i = 2; i <= limiter; i++){
		while(num1 % i == 0 && num2 % i == 0){
			hcf*=i;
			num1/=i;
			num2/=i;
		}
	}
	
	int lcm = constantNum1*constantNum2/hcf;

	printf("Highest common factor of the given numbers is: %d\n",hcf);
	printf("Lowest common multiple of the given numbers is: %d",lcm);
	
	return 0;
}
