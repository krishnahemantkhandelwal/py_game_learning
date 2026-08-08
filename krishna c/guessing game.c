#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(0));
	int i,input,score= 0,compscore=0;
	int number,gamemode,max,level;
	printf("GUESSING GAME(ragebait game)\n");
	printf("1.easy(1-5-gamemode 1 and 1-20-gamemode 2 )\n2. medium(1-10-gamemode 1 and 2)\n3. hard(1-20- gamemode1 and 1-5-gamemode2)\n");
	printf("enter difficulty level:- ");
	scanf("%d",&level);
	switch(level) {
		case 1:
			max= 5;
			break;
		case 2:
			max= 10;
			break;
		case 3:
			max= 20;
			break;
		case -10101:
			printf("how do you know the secret number!\n Your gamemode changed to ultra easy as a reward\n");
			max= 2;
			break;
		default:
			printf("invalid level choise\n");
			max=35;
			printf("maximum set to 35 in gamemode1 and 2 in gamemode2(ultra hard mode)\n");
	}
	printf("1. you guessing		2.computer guessing\n");
	printf("choose the gamemode:-");
	scanf("%d",&gamemode);
	switch(gamemode) {
		case 1:	
			for(i=1;i<=10;i++) {
				number= rand() % max + 1;
				printf("\n");
				printf("Round %d\nScore:- %d\n",i,score);
				printf("guess the number(1-%d)-",max);
				scanf("%d",&input);
				if(number==input) {
					printf("The number was %d\n",number);
					printf("you guessed it right\n");
					score++;
					printf("your score is %d\n",score);
				}
				else {
					printf("The number was %d\n",number);
					printf("You guessed it wrong\n");	
				}
			}
			printf("your score was %d/10\n",score);
			break;
		case 2:
			switch(max) {
				case 5:
					max= 20;
					break;
				case 10:
					max= 10;
					break;
				case 20:
					max= 5;
					break;
				case 2:
					max= 35;
					break;
				default:
					max= 2;
					break;
			}
			for(i=1;i<=10;i++) {
				number= rand() % max + 1;
				printf("\n");
				printf("Round %d\nScore:- %d\nComputer score:- %d\n",i,score,compscore);
				printf("enter a number(1-%d):- ",max);
				scanf("%d",&input);
				if(input>max || input<=0) {
					printf("your number is invalid\n");
					printf("computer score got increased as punishment\n");
					compscore++;
				}
				else {
					if(input==number) {
						printf("computer guessed it right!\n");
						compscore++;
						printf("computer score:- %d\n",compscore);
					}
					else {
						printf("computer guessed %d\n",number);
						printf("computer couldn't guess it!\n");
						score++;
						printf("your score:- %d\n",score);
					}
				}
			}
			printf("\nComputer score:- %d\n",compscore);
			printf("your score:- %d\n",score);
			break;
		default:
			printf("invalid gamemode choice!\n");
			break;
	}
	char choice;
	printf("Play again? (y/n): ");
	scanf(" %c",&choice);

	if(choice == 'y') {
		printf("\n");
    	main(); 
	}
	return 0;
}
