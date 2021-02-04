#include <stdio.h> 
#include <stdlib.h> // Library for rand(); function.
#include <time.h> // Library for calling time(); function to seed rand(); function.        

enum MoveS {SpiderSense, ShootWeb, AgilityAndSpeed}; // Moves of Green Goblin and Spider-Man.
enum MoveG {JackOLantern, RazorBats, GhostBomb};

enum MoveS moveSpiderMan; // Move variables.
enum MoveG moveGreenGoblin; 

int spiderManEnergy = 100; // Energies of characters.
int greenGoblinEnergy = 100;

void spiderManAttacks(); // Function called when spider-man's turn comes and he attacks.
void greenGoblinAttacks(); // Function called when green goblin's turn comes and he attacks. 
void printEnergies(); // Function to print the remaining energies of characters.


int main ()
{
	srand(time(NULL));  // Used to randomize the program in every execution.
	
	puts("Battle begins!!!");
	
	int coinFlip = rand() % 2;  // Decides which side will attack first.
	
	if (coinFlip == 0)
	{
		while (spiderManEnergy > 0 && greenGoblinEnergy > 0)  // Checks the characters' energies to decide if the fight should continue or not.
		{
			spiderManAttacks();
			printEnergies();
			greenGoblinAttacks();
			printEnergies();
		}
		
		if (spiderManEnergy <= 0 && greenGoblinEnergy > 0) // Prints that Green Goblin has won.
			puts("Green Goblin won! Yeah Jack-o’-lanterns!");
			
		else if (greenGoblinEnergy <= 0 && spiderManEnergy > 0) // Prints that Spider-Man has won.
			puts("Spider-Man wins! Yeah Spidey rules!");
		
		else // Prints that the battle has ended in a tie.
			puts("The battle ends in a tie! Nobody wins!");
	}
	
	else
	{
		while (spiderManEnergy > 0 && greenGoblinEnergy > 0) // Checks the characters' energies to decide if the fight should continue or not.
		{
			greenGoblinAttacks();
			printEnergies();
			spiderManAttacks();
			printEnergies();
		}
		
		if (spiderManEnergy <= 0 && greenGoblinEnergy > 0) // Prints that Green Goblin has won.
			puts("Green Goblin won! Yeah Jack-o-lanterns!");
			
		else if (greenGoblinEnergy <= 0 && spiderManEnergy > 0) // Prints that Spider-Man has won.
			puts("Spider-Man wins! Yeah Spidey rules!");
		
		else // Prints that the battle has ended in a tie.
			puts("The battle ends in a tie! Nobody wins!");
	}
	
}


void spiderManAttacks()
{
	int whichMove = 1 + rand() % 100;
	
	if (whichMove <= 45)  // Decides which move to make.
		moveSpiderMan = SpiderSense;
	
	else if (whichMove <= 65)
		moveSpiderMan = ShootWeb;
	
	else
		moveSpiderMan = AgilityAndSpeed;
		
	switch (moveSpiderMan)  // Checks which move is to be made and deals damage accordingly.
	{
		case SpiderSense:
			puts("Spider-Man uses spider-sense!");
			greenGoblinEnergy -= 5;
			break;
		
		case ShootWeb:
			puts("Spider-Man shoots spider web!");
			greenGoblinEnergy -= 8;
			break;
		
		case AgilityAndSpeed:
			puts("Spider-Man uses super agility and speed!");
			greenGoblinEnergy -= 11;
			break;
	}
}

void greenGoblinAttacks()
{
	int whichMove = 1 + rand() % 100;
	
	if (whichMove <= 45)   // Decides which move to make.
		moveGreenGoblin = JackOLantern;
	
	else if (whichMove <= 85)
		moveGreenGoblin = RazorBats;
	
	else
		moveGreenGoblin = GhostBomb;
		
	switch (moveGreenGoblin)  // Checks which move is to be made and deals damage accordingly.
	{
		case JackOLantern:
			puts("Green Goblin throws a jack-o-lantern!");
			spiderManEnergy -= 5;
			break;
		
		case RazorBats:
			puts("Green Goblin sends out razor bats!");
			spiderManEnergy -= 8;
			break;
		
		case GhostBomb:
			puts("Green Goblin throws a ghost bomb!");
			spiderManEnergy -= 11;
			break;
	}
	
}

void printEnergies()
{
	printf("Spider-Man: %d     Green Goblin: %d\n",spiderManEnergy,greenGoblinEnergy); // Prints the energies of the characters.
}
