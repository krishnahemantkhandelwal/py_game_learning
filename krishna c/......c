#include <stdio.h>
#include <windows.h>

void setcolor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
	setcolor(10000);
	printf("hello");
	setcolor(7);
}
