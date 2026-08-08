#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    // 12= red
    // 10= green
    // 3= blue
    // 6= yellow
    // 7= normal
    // 15= white
}
int main() {
	printf("______________________________________________\n");
	printf("|                 |49|50v|51|                 |\n");
	printf("|   B1       B2   |48|52|0_    Y1       Y2   |\n");
	printf("|   72       73   |47|53|1_|   76       77   |\n");
	printf("|   B3       B4   |46|54|2_|   Y3       Y4   |\n");
	printf("|   74       75   |45|55|3_|   78       79   |\n");
	printf("|---  ------------|44|56v|4_|-----------------|\n");
	printf("|38|39|40|41|42|43| \\ 88  / |_5|_6|_7|_8|_9|10|\n");//89
	printf("|37>|62|63|64|65|66>91 >-< 89 <61|60|59|58|57|<11|\n");
	printf("|36|35|34|33|32|31|_/_ 90_\\_|17|16|15|14|13|12|\n");
	printf("|-----------------|30|71^|18|-------------  --|\n");
	printf("|   R1       R2   |29|70|19|   G1       G2   |\n");
	printf("|   80       81   |28|69|20|   84       85   |\n");
	printf("|   R3       R4   |27|68|21|   G3       G4   |\n");
	printf("|   82       83    26|67|22|   86       87   |\n");
	printf("|-----------------|25|24^|23|-----------------|\n");
/*	setcolor(3);
	printf("__________________");
	setcolor(15);
	printf("__________");
	setcolor(6);
	printf("__________________\n");
	setcolor(15);
	printf("|                 |__|v_|__|                 |\n");
	printf("|   ");
	setcolor(3);
	printf("B1       B2   ");
	setcolor(15);
	printf("|__");
	setcolor(6);
	printf("|__|__    Y1       Y2   ");
	setcolor(15);
	printf("|\n");
	printf("|                 |**");
	setcolor(6);
	printf("|__|");
	setcolor(15);
	printf("__|                 |\n");
	printf("|  ");
	setcolor(3);
	printf(" B3       B4   ");
	setcolor(15);
	printf("|__");
	setcolor(6);
	printf("|__|");
	setcolor(15);
	printf("__|");
	setcolor(6);
	printf("   Y3       Y4   ");*/
}
