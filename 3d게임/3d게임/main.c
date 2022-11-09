#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void gotoxy(int x, int y) {
	COORD pos = { x,y };

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main(void) {
	system("mode con: cols=60 lines=20");
	int num = 0;
	while (1) {
		printf("1.종료");
		scanf("%d", &num);
		if (num == 1) {
			printf("종료합니다");
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}