#include <stdio.h>

struct point
{
	int x;
	int y;
};
struct student
{
	char name[20];
	struct point* link;
};

int main(void) {

	struct student stu1 = {"Kim",NULL};
	struct student stu2 = { "Lee",NULL };
	struct point p1 = { 30,40 };
	struct point p2 = { 60,80 };

	stu1.link = &p1;
	stu2.link = &p2;

	printf("%s %d %d \n",stu1.name,stu1.link->x,stu1.link->y);
	printf("%s %d %d \n",stu2.name,stu2.link->x,stu2.link->y);

	return 0;
}

//
// 
// 3����� 7��������� point��� �̸��� ����ü�� �����Ѵ�.
// 
// 8����� 12�డ���� student��� �̸��� ����ü�� �����Ѵ�. 11�࿡�� �������� �ܺ����� ����ü ���� link�� �����Ѵ�.
// ��, ����ü student���� ����ü point�� �ܺ� �����ϴ� ������ �����Ѵ�.
// 
// 16,17�࿡�� ����ü ���� stu1�� stu2�� �����ϰ� ���ÿ� �ʱ�ȭ�Ѵ�.
// 
// 18, 19�࿡�� ����ü ����ü ���� p1�� p2�� �����ϰ� ���ÿ� �ʱ�ȭ�Ѵ�.
// 
// 
// 21, 22�࿡�� stu1.link�� &p1(����ü ���� p1�� �ּ�)�� �����ϰ�, stu2.link�� &p2(����ü ���� p2�� �ּ�)��
// �����Ѵ�. ��ó�� ����ü ���Ǻ� ���� �ٸ� �̸��� ����ü�� ������ �� �ִ�.
//
