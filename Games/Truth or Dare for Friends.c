#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	printf("TRUTH OR DARE");
	int value = 1;
	
	while(value)
	{
		int askingPerson = rand() % 4;
		int answeringPerson = rand() % 4;
		
		while(askingPerson == answeringPerson)
			answeringPerson = rand() % 4;
	
		switch(askingPerson)
		{
		case 0:
			printf("Player 1 asks.\n");
			break;
		
		case 1:
			printf("Player 2 asks.\n");
			break;
			
		case 2:
			printf("Player 3 asks.\n");
			break;
			
		case 3:
			printf("Player 4 asks.\n");
			break;
		}
		
		switch(answeringPerson)
		{
		case 0:
			printf("Player 1 answers.\n\n");
			break;
		
		case 1:
			printf("Player 2 answers.\n\n");
			break;
			
		case 2:
			printf("Player 3 answers.\n\n");
			break;
			
		case 3:
			printf("Player 4 answers.\n\n");
			break;
			
		
		}
		
		system("pause");
		printf("\n");
		
	}
	
	return 0;
	
	
}
