#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main(void) {
	struct point p1 = { 20,30 };
	printf("����ü ���� p1�� �ּ�: %x \n", &p1);
	printf("��� ���� p1.x�� �ּ�: %x \n,", &p1.x);

	return 0;
}
// ����ü ���� p1�� �ּ�: 4a37f7e8
// ��� ���� p1.x�� �ּ� : 4a37f7e8
// 
// 
// ���� �׸��� ���� ����ü ���� p1�� ���� �ּ��� &p1��
// ����ü�� ù ��° ��� ���� p1.x�� �ּ��� &p1.x�� �ּҰ� ����.
// 
// 
//