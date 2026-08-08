#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>

void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


int main() {
	srand(time(0));
	char word[45], enteredword[45];
	int mistakes=0;
	int i;
	int wc;
	double timeTaken, totaltime= 0.00;
	clock_t start, end;
	printf("WPM CALCULATOR GAME\n");
	for(i=1;i<=10;i++) {
		printf("\nROUND %d\n",i);
		printf("press enter to start this round:");
		getchar();
		printf("%s",(i==1)?"":"\n");
		wc= rand() % 30 + 1;
		switch(wc) {
			case 1: strcpy(word, "krishna"); break;
            case 2: strcpy(word, "earth"); break;
            case 3: strcpy(word, "computer"); break;
            case 4: strcpy(word, "box"); break;
            case 5: strcpy(word, "power"); break;
            case 6: strcpy(word, "alien"); break;
            case 7: strcpy(word, "volcano"); break;
            case 8: strcpy(word, "coding"); break;
            case 9: strcpy(word, "youtube"); break;
            case 10: strcpy(word, "animal"); break;
            case 11: strcpy(word, "pizza"); break;
            case 12: strcpy(word, "apple"); break;
            case 13: strcpy(word, "homework"); break;
            case 14: strcpy(word, "books"); break;
            case 15: strcpy(word, "door"); break;
            case 16: strcpy(word, "umbrella"); break;
            case 17: strcpy(word, "truck"); break;
            case 18: strcpy(word, "chair"); break;
            case 19: strcpy(word, "telephone"); break;
            case 20: strcpy(word, "cockroach"); break;
            case 21: strcpy(word, "spy"); break;
            case 22: strcpy(word, "black"); break;
            case 23: strcpy(word, "wire"); break;
            case 24: strcpy(word, "grassland"); break;
            case 25: strcpy(word, "mathematician"); break;
            case 26: strcpy(word, "pratyush"); break;
            case 27: strcpy(word, "washroom"); break;
            case 28: strcpy(word, "cake"); break;
            case 29: strcpy(word, "paintball"); break;
            case 30: strcpy(word, "pneumonoultramicroscopicsilicovolcanoconiosis"); break;
		}
		printf("word:- ");
		setcolor(10);
		printf("%s\n",word);
		setcolor(7);
		start = clock();
   		scanf("%s", enteredword);
    	end = clock();
    	if(strcmp(word, enteredword) == 0) {
    		timeTaken = (double)(end - start) / CLOCKS_PER_SEC;
    		totaltime+= timeTaken;
    		printf("you typed it in %.1f sec\n",timeTaken);
    	} else {
    		printf("You entered wrong word, nothing will be considered\n");
    		mistakes++;
		}
	}
	double WPM= ((10-mistakes)/totaltime) * 60;
	printf("your WPM is %0.f words per minute",WPM);
	
}
