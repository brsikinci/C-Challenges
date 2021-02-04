#include <stdio.h>
#include <math.h>

void replaceDigit(int *ptr, int replace, int replacement);  //Function prototype.

int main()
{
	int number; //Variables.
	int replace;
	int replacement;
	
	printf("Enter an integer: ");
	scanf("%d", &number);
	printf("Enter the digit to replace: ");
	scanf("%d", &replace);
	printf("Enter the replacement digit: ");
	scanf("%d", &replacement);
	
	replaceDigit(&number, replace, replacement); //Function call.
	
	printf("New number is: %d", number);
	
	return 0;
}

void replaceDigit(int *ptr, int replace, int replacement)
{
	int temp = *ptr;  //Variables.
	int lost = 0;
	int counter = 0; 
	int i;
	int multiple = 1;
	
	while (temp > 0)
	{
		for(i = 0; i < counter; i++){  //This for loop is used for reconstructing the lost integers within the program execution.
			multiple *= 10;
		}
		
		if (temp % 10 == replace){
			temp = temp - replace + replacement; //Digit replacement.
			temp *= pow(10, counter); //Return the number to its original magnitude of power (10's magnitudes of power to be more specific).
			temp += lost; //Add the lost part of the number back to the original number to finish reconstruction of the number with the replaced digit.
			break;
		}
		
		lost += temp % 10 * multiple; //This is used to hold the lost value.
		
		temp /= 10;
		counter++;
		multiple = 1;
	}
	
	*ptr = temp;
	
}
