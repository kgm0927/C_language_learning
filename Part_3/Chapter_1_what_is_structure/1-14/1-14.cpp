#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student
{
	char no[10];
	char name[10];
};

int main(void) {
	
	int i = 0;
	struct student stu;

	strcpy(stu.no,"20101323");
	strcpy(stu.name, "Park");
	printf("�й� : %s, �̸� : %s \n", stu.no, stu.name);

	return 0;
}

//
// 2�࿡�� #include <string.h>�� �߰��ߴ�. ��� ���� stdio.h�� ������ scanf() �Լ���
// printf() �Լ��� ����� �� �ִ� �ͫK, ��� ���� string.h�� ���� ���ڿ� ó�� �Լ���
// ����� �� �ִ�.
// 
// 6��� 7�࿡�� ����ü�� ��� ������ ���ڿ� �迭�� �����ߴ�.
// 15��� 16�࿡�� strcpy() �Լ��� ����ؼ� ���ڿ��� �����Ѵ�.
// 
//


