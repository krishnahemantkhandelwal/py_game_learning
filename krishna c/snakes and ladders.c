#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void board(int player1,int player2) {
	int row, col;
    int snakes[101] = {0};
    int ladders[101] = {0};
    snakes[97]= 61;
    snakes[91]= 73;
    snakes[51]= 7;
    snakes[65]= 44;
    snakes[45]= 27;
    snakes[38]= 20;
    snakes[85]= 24;
    ladders[5]= 58;
    ladders[14]= 49;
    ladders[42]= 60;
    ladders[64]= 83;
    ladders[53]= 72;
    printf("+---+---+---+---+---+---+---+---+---+---+\n");
    for (row=9;row>=0;row--) {
        if (row%2==0) {
            for (col=0;col<10;col++) {
                int num=row*10+col+1;
                if (player1==num&&player2==num) {
                	printf("|");
                	setcolor(6);
                    printf(" B ");
                    setcolor(7);
                }
                else if (player1==num) {
                	printf("|");
                    setcolor(12);
                    printf("P1 ");
                    setcolor(7);
                }
                else if (player2==num) {
                	printf("|");
                    setcolor(10);
                    printf("P2 ");
                    setcolor(7);
                }
                else if (snakes[num]!=0) {
                    printf("|S%2d",snakes[num]);
                }
                else if (ladders[num]!=0) {
                    printf("|L%2d",ladders[num]);
                }
                else {
                    printf("|%3d",num);
                }
            }
        } else {
            for (col=9;col>=0;col--) {
                int num=row*10+col+1;
                if (player1==num && player2==num) {
                	setcolor(6);
                    printf("| B ");
                    setcolor(7);
                }
                else if (player1==num) {
                	setcolor(12);
                    printf("|P1 ");
                    setcolor(7);
                }
                else if (player2==num) {
                	setcolor(10);
                    printf("|P2 ");
                    setcolor(7);
                }
                else if (snakes[num]!=0) {
                    printf("|S%2d",snakes[num]);
                }
                else if (ladders[num]!=0) {
                    printf("|L%2d",ladders[num]);
                }
                else {
                    printf("|%3d", num);
                }
            }
        }
    printf("|\n+---+---+---+---+---+---+---+---+---+---+\n");
    }
}

int main() {
	srand(time(0));
	int snakes[101] = {0};
    int ladders[101] = {0};
    snakes[97]= 61;
    snakes[91]= 73;
    snakes[51]= 7;
    snakes[65]= 44;
    snakes[45]= 27;
    snakes[38]= 20;
    snakes[85]= 24;
    ladders[5]= 58;
    ladders[14]= 49;
    ladders[42]= 60;
    ladders[64]= 83;
    ladders[53]= 72;
	int player1= 1,player2= 1;
	int i,j;
	int dice,current=1;
	printf("            SNAKES & LADDERS\n");
	board(player1,player2);
	while(player1!= 100 && player2!= 100) {
		printf("current turn:- player %d\npress enter to roll:-",(current%2==1)?1:2);
		getchar();
		dice = rand() % 6 + 1;
		printf("You rolled %d!\n", dice);
		if (current%2==1) {
	    player1+= dice;
    	if (player1>100) {
    		player1 -= dice;	
		}
    	if (snakes[player1] != 0) {
			player1 = snakes[player1];
			printf("You got bitten by a snake!\n");
		}
    	else if (ladders[player1] != 0) {
			player1 = ladders[player1];
			printf("You climbed a ladder!\n");
		}
		} else {
    		player2 += dice;
    	}
    	if (player2 > 100) {
			player2 -= dice;
		}
    	if (snakes[player2] != 0) {
			player2 = snakes[player2];
			printf("You got bitten by a snake!\n");
		}
    	else if (ladders[player2] != 0){
			player2 = ladders[player2];
			printf("You climbed a ladder!\n");
		}
		board(player1 ,player2);
		if(dice!=6) {
			current++;	
		} else {
			printf("You got extra chance!\n");
		}
	}
	if (player2 == 100) {
		printf("****|------------|****\n");
		printf("****|player2 won!|****\n");
		printf("****|------------|****\n");
	}
	else {
		printf("****|------------|****\n");
		printf("****|player1 won!|****\n");
		printf("****|------------|****\n");
	}
} 
