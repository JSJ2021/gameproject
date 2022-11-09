#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y) {
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(void) {
	system("mode con: cols=60 lines=20");
	printf("hello world");
	return 0;
}