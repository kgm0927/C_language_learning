#include <stdio.h>

struct student
{
	char name[20];
	int money;
	struct student* left_link;
	struct student* right_link;
};

int main(void) {

	struct student stu1={"Kim",90,NULL,NULL};
	struct student stu2={"Lee",80,NULL,NULL};
	struct student stu3 = { "Goo",60,NULL,NULL };

	stu1.left_link = &stu2;
	stu1.right_link = &stu3;

	printf("%d %d \n",stu1.name,stu1.money);
	printf("%d %d \n",stu1.left_link->name,stu1.left_link->money);
	printf("%d %d \n",stu1.right_link->name,stu1.right_link->money);

	return 0;

}

//
// 
// 7��� 8�࿡�� ����ü student ���� �ڱ� ���� ����ü ������ �� �� �����Ѵ�.
// 13����� 15��������� ����ü ���� stu1, stu2, stu3�� �����ϰ� ���ÿ� �ʱ�ȭ�Ѵ�.
// �̶� �������� �ڱ� ���� ����ü ���� left_link�� right_link�� NULL�� �����Ѵ�.
// 
// 
// 17��� 18�࿡�� stu1.left_link�� &stu2(����ü ���� stu2�� ���� �ּ�)�� �����ϰ�,
// stu1.right_link�� &stu3(����ü ���� stu3�� ���� �ּ�)�� �����Ѵ�.
//