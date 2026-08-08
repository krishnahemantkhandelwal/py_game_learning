#include <stdio.h>

int main() {
	int i,j,a=1,b=1;
	int btlfld[3][3]= {
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	int input;
	printf("  TIC TAC TOE\n");
	printf("player1		player2\n");
	printf("   x    	   o   \n");
	printf("---------------\n");
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			printf("| %d |",a);
			a++;
		}
		printf("\n---------------\n");
	}
	do{
		printf("player %d turn\n",(b%2==1)?1:2);
		printf("at which point you want to enter %c:",(b%2==1)?'x':'o');
		scanf("%d",&input);
		switch (input) {
			case 1:
				if(btlfld[0][0]==0) {
					btlfld[0][0]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 2:
				if(btlfld[0][1]==0) {
					btlfld[0][1]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 3:
				if(btlfld[0][2]==0) {
					btlfld[0][2]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 4:
				if(btlfld[1][0]==0) {
					btlfld[1][0]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 5:
				if(btlfld[1][1]==0) {
					btlfld[1][1]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 6:
				if(btlfld[1][2]==0) {
					btlfld[1][2]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 7:
				if(btlfld[2][0]==0) {
					btlfld[2][0]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 8:
				if(btlfld[2][1]==0) {
					btlfld[2][1]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			case 9:
				if(btlfld[2][2]==0) {
					btlfld[2][2]=(b%2==1)?1:2;
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}	
				}
				else {
					printf("there is already something in that position\n your this chance has been cancelled!\n");
					printf("\n---------------\n");
					for(i=0;i<3;i++) {
						for(j=0;j<3;j++) {
							printf("| %c |",(btlfld[i][j]!=0)?((btlfld[i][j]==1)?'x':'o'):' ');
						}
						printf("\n---------------\n");
					}
				}
				break;
			default:
				printf("invalid position\n your this move has been cancelled\n");
				break;
		}
		b++;
	}while(!((btlfld[0][0]==1 && btlfld[0][1]==1 && btlfld[0][2]==1) || (btlfld[1][0]==1 && btlfld[1][1]==1 && btlfld[1][2]==1) || (btlfld[2][0]==1 && btlfld[2][1]==1 && btlfld[2][2]==1) || (btlfld[0][0]==1 && btlfld[1][0]==1 && btlfld[2][0]==1) || (btlfld[0][1]==1 && btlfld[1][1]==1 && btlfld[2][1]==1) || (btlfld[0][2]==1 && btlfld[1][2]==1 && btlfld[2][2]==1) || (btlfld[0][0]==1 && btlfld[1][1]==1 && btlfld[2][2]==1) || (btlfld[0][2]==1 && btlfld[1][1]==1 && btlfld[2][0]==1) || (btlfld[0][0]==2 && btlfld[0][1]==2 && btlfld[0][2]==2) || (btlfld[1][0]==2 && btlfld[1][1]==2 && btlfld[1][2]==2) || (btlfld[2][0]==2 && btlfld[2][1]==2 && btlfld[2][2]==2) || (btlfld[0][0]==2 && btlfld[1][0]==2 && btlfld[2][0]==2) || (btlfld[0][1]==2 && btlfld[1][1]==2 && btlfld[2][1]==2) || (btlfld[0][2]==2 && btlfld[1][2]==2 && btlfld[2][2]==2) || (btlfld[0][0]==2 && btlfld[1][1]==2 && btlfld[2][2]==2) || (btlfld[0][2]==2 && btlfld[1][1]==2 && btlfld[2][0]==2) || (btlfld[0][0]!=0 && btlfld[0][1]!=0 && btlfld[0][2]!=0 && btlfld[1][0]!=0 && btlfld[1][1]!=0 && btlfld[1][2]!=0 && btlfld[2][0]!=0 && btlfld[2][1]!=0 && btlfld[2][2]!=0)));
	if ((btlfld[0][0]==1 && btlfld[0][1]==1 && btlfld[0][2]==1) || (btlfld[1][0]==1 && btlfld[1][1]==1 && btlfld[1][2]==1) || (btlfld[2][0]==1 && btlfld[2][1]==1 && btlfld[2][2]==1) || (btlfld[0][0]==1 && btlfld[1][0]==1 && btlfld[2][0]==1) || (btlfld[0][1]==1 && btlfld[1][1]==1 && btlfld[2][1]==1) || (btlfld[0][2]==1 && btlfld[1][2]==1 && btlfld[2][2]==1) || (btlfld[0][0]==1 && btlfld[1][1]==1 && btlfld[2][2]==1) || (btlfld[0][2]==1 && btlfld[1][1]==1 && btlfld[2][0]==1)) {
		printf("****|------------|****\n");
		printf("****|player1 won!|****\n");
		printf("****|------------|****\n");
	}
	else if ((btlfld[0][0]==2 && btlfld[0][1]==2 && btlfld[0][2]==2) || (btlfld[1][0]==2 && btlfld[1][1]==2 && btlfld[1][2]==2) || (btlfld[2][0]==2 && btlfld[2][1]==2 && btlfld[2][2]==2) || (btlfld[0][0]==2 && btlfld[1][0]==2 && btlfld[2][0]==2) || (btlfld[0][1]==2 && btlfld[1][1]==2 && btlfld[2][1]==2) || (btlfld[0][2]==2 && btlfld[1][2]==2 && btlfld[2][2]==2) || (btlfld[0][0]==2 && btlfld[1][1]==2 && btlfld[2][2]==2) || (btlfld[0][2]==2 && btlfld[1][1]==2 && btlfld[2][0]==2)) {
		printf("****|------------|****\n");
		printf("****|player2 won!|****\n");
		printf("****|------------|****\n");
	}
	else {
		printf("-----|----------|-----\n");
		printf("-----|match tied|-----\n");
		printf("-----|----------|-----\n");
	}
}
