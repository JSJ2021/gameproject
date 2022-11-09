#include "3d게임엔진.h"

struct vec3d
{
	float x, y,z;
};
struct triangle
{
	struct vec3d vec[3];
};
void game_3DEngine() {
	return 1;
}
void usercreate() {
	return 1;
}
void userUpdate() {
	return 1;
}

int main(void) {
	system("mode con: cols=256 lines=240");
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