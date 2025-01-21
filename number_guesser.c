#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	char name[20];
	int guess;
	int correct;
	int turnTracker;
	bool keepGoing = true;

	printf("Please enter your name:");
	scanf("%s", name);
	printf("Hello %s! Let's play a game!\n", name);

	srand(time(NULL));
	correct = (rand() %100) + 1;

	turnTracker = 0;

	while(keepGoing){
		turnTracker++;
		printf("Turn %d) Please guess a number:",turnTracker);
		scanf("%d", &guess);
		if(guess < correct){
			printf("Too low!\n");
		}
		else if(guess > correct){
			printf("Too high!\n");
		}
		else{
			printf("Correct!\n");
			keepGoing = false;
		}
	}

	if(turnTracker > 7){
		printf("You did pretty bad...\n");
	}	
	else if(turnTracker < 7){
		printf("You did pretty good!\n");
	}
	else{
		printf("You did ok.\n");
	}

	return 0;

}

