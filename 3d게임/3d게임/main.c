#include "3d���ӿ���.h"

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
		printf("1.����");
		scanf("%d", &num);
		if (num == 1) {
			printf("�����մϴ�");
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}