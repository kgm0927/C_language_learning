#include <stdio.h>

struct point {
	
	int x;
	int y;
};

int main(void) {

	struct point p1 = { 10,20 };
	struct point p2 = { 0,0 };

	p2 = p1;

	printf("%d %d \n", p1.x, p1.y);
	printf("%d %d \n", p2.x, p2.y);

	return 0;
}

//
// 
// 
// ����ü ������ ����
// 
// ���� ���� ���� ���� a�� �� 3�� ���� b�� �����ϰ� �ִ�.
// ���� a�� b ��� int���̱� �����̴�.
// 
// 
// 
// int a=3;
// int b=0;
// b=a;		// ������ ����
// printf("%d %d \n", a,b);
// 
// 
// �̷��� ����ü ������ ���� ���簡 �����ϴ�.
// 
// struct point p1={10,20};
// struct point p2={0,0};
// 
// p2=p1;		// ����ü ������ ����
//