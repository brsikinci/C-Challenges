#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void moveSnail( int * const snailMovePtr );
void moveFrog( int * const frogMovePtr );
void printCurrentPositions( const int * const snailPositionPtr, const int * const frogPositionPtr );

int main()
{
	srand(time(NULL));
	int snailPosition = 1;
	int frogPosition = 1;
	printf("BANG !!!!!\nAND THEY'RE OFF !!!!!\n");
	int * snailMovePtr = &snailPosition;
	int * frogMovePtr = &frogPosition; 
	while (snailPosition <= 70 && frogPosition <= 70)
	{
		moveSnail(snailMovePtr);
		moveFrog(frogMovePtr);
		printCurrentPositions (snailMovePtr, frogMovePtr);
		printf("\n\n");
		if(snailPosition >= 70)
		{
			printf("\nSNAIL WINS!!! YAY!!! ");
			break;
		}
		else if(frogPosition >= 70)
		{
			printf("\nFrog wins.Yuch.");
			break;
		}
		else if(frogPosition >= 70 && snailPosition >= 70){
			printf("\nIt's a tie.");
			break;
		}
			
	}
	
}

void moveSnail ( int * const snailMovePtr)
{
	int i = 1 + rand() % 10;
	
	if(i <= 5)
		*snailMovePtr += 3;
	else if(i <= 7)
		*snailMovePtr += 1;
	else
		*snailMovePtr -= 6;
	if(*snailMovePtr < 0)
		*snailMovePtr = 1; 
	
}

void moveFrog ( int * frogMovePtr)
{
	int j = 1 + rand() % 10;
	
	if(j <= 2)
		*frogMovePtr += 0;
	else if(j <= 4)
		*frogMovePtr += 9;
	else if(j <= 5)
		*frogMovePtr -= 12;
	else if(j <= 8)
		*frogMovePtr += 1;
	else
		*frogMovePtr -= 2;
	if(*frogMovePtr < 0)
		*frogMovePtr = 1;
}

void printCurrentPositions ( const int * const snailPositionPtr, const int * const frogPositionPtr )
{
	int k = 1;
	
	
	if (*snailPositionPtr < *frogPositionPtr)
	{
		while(k < *snailPositionPtr)
		{
			printf(" ");
			k++;
		}
		printf("S");
		k = 1;
		while(k < *frogPositionPtr - *snailPositionPtr + 1)
		{
			printf(" ");
			k++;
		}
		printf("F");
	}
	
	else if (*frogPositionPtr < *snailPositionPtr)
	{
		k = 1;
		while(k < *frogPositionPtr)
		{
			printf(" ");
			k++;
		}
		printf("F");
		k = 1;
		while(k < *snailPositionPtr - *frogPositionPtr + 1)
		{
			printf(" ");
			k++;
		}
		printf("S");
	}
	
	else
	{
		k = 1;
		while(k < *frogPositionPtr){
			printf(" ");
			k++;
		}
			
			
		printf("EEEW!!!");
	}

	
}
