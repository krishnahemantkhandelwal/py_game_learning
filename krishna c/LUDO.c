#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void printboard(int* board,int Bwin,int Ywin,int Rwin,int Gwin) {
	printf("______________________________________________\n");
	printf("|                 |%s|%s|%s|                 |\n");
	printf("|   %s       %s   |%s|%s|%s    %s       %s   |\n");
	printf("|                 |%s|%s|%s|                 |\n");
	printf("|   %s       %s   |%s|%s|%s|   %s       %s   |\n");
	printf("|                 |%s|%s|%s|                 |\n");
	printf("|---  ------------|%s|%s|%s|-----------------|\n");
	printf("|%s|%s|%s|%s|%s|%s| \\ %c  / |%s|%s|%s|%s|%s|%s|\n");
	printf("|%s|%s|%s|%s|%s|%s> %c >< %c <%s|%s|%s|%s|%s|%s|\n");
	printf("|%s|%s|%s|%s|%s|%s|_/_ %c_\\_|%s|%s|%s|%s|%s|%s|\n");
	printf("|                 |%s|%s|%s|                 |\n");
	printf("|   %s       %s   |%s|%s|%s|   %s       %s   |\n");
	printf("|                 |%s|%s|%s|                 |\n");
	printf("|   %s       %s   |%s|%s|%s|   %s       %s   |\n");
	printf("|                  %s|%s|%s|                 |\n");
	printf("|-----------------|%s|%s|%s|-----------------|\n");
	
}

int main() {
	srand(time(0));
	int board[92]= {0}; // b= 1; y= 10; r= 20; g= 30;
	board[72]= 1;
	board[73]= 2;
	board[74]= 3;
	board[75]= 4;
	board[76]= 11;
	board[77]= 12;
	board[78]= 13;
	board[89]= 14;
	board[80]= 21;
	board[81]= 22;
	board[82]= 23;
	board[83]= 24;
	board[84]= 31;
	board[85]= 32;
	board[86]= 33;
	board[87]= 34;
	board[89]= 100;
	board[90]= 100;
	board[91]= 100;
	board[92]= 100;
	int safespot= {}
	int dice,player= 1,i;
	int token;
	int Gwin=0,Rwin=0,Bwin=0,Ywin=0;
	int blue1= 72,blue2= 73,blue3= 74,blue4= 75;
	int yellow1= 76,yellow2= 77,yellow3= 78,yellow4= 79;
	int red1= 80,red2= 81,red3= 82,red4= 83;
	int green1= 84,green2= 85,green3= 86,green4= 87;
	printf("		    LUDO\n");
	printf("______________________________________________\n");
	printf("|                 |__|v_|__|                 |\n");
	printf("|   B1       B2   |__|__|__    Y1       Y2   |\n");
	printf("|                 |**|__|__|                 |\n");
	printf("|   B3       B4   |__|__|__|   Y3       Y4   |\n");
	printf("|                 |__|__|__|                 |\n");
	printf("|---  ------------|__|v_|__|-----------------|\n");
	printf("|__|__|__|__|__|__| \\ -  / |__|__|__|__|__|__|\n");
	printf("|_>|__|__|__|__|__> - >< - <__|__|__|__|__|<_|\n");
	printf("|__|__|**|__|__|__|_/_ -_\\_|__|__|__|__|  |__|\n");
	printf("|                 |__|^_|__|                 |\n");
	printf("|   R1       R2   |__|__|__|   G1       G2   |\n");
	printf("|                 |__|__|__|                 |\n");
	printf("|   R3       R4   |__|__|__|   G3       G4   |\n");
	printf("|                  __|__|__|                 |\n");
	printf("|-----------------|__|^_|__|-----------------|\n");
	while (!(Gwin==4 || Rwin==4 || Ywin==4 || Bwin==4)) {
		printf("its %s's turn\n",(player==1)?"blue":((player==2)?"yellow":((player==3)?"red":"green")));
		printf("press enter to roll dice:-");
		getchar();
		dice= rand()%6+1;
		printf("you rolled %d\n",dice);
		printf("enter which token you have to move:-");
		scanf("%d",&token);
		if(player==1) {
			if(token==1) {
				if(blue1==73) {
					if(dice==6) {
						board[blue1]= 0;
						blue1= 39;
						board[blue1]= 1;
					}
					else {
						if(player==4) {
							player= 1;
						} else {
							player++;
						}
						continue;
					}
				if ((blue1+dice)>37) {
					if(blue1==)
					}
				}
			}
		}
	}
}
