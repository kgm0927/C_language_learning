#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];// ��� ������ �迭 ����

};

int main(void) {
	int i = 0;
	struct student stu;

	//stu.no = "20101323";// ���� �߻�
	//stu.name = "Park";	// ���� �߻�
	printf("�й� : %s, �̸�: %s \n", stu.no, stu.name);

	return 0;

}

//
// 
// 14��� 15�࿡�� ������ �߻��Ѵ�. �ƹ� ������ ���� ��������, ���� ��� ���� no�� name�� �迭
// �̸��̴�. �迭 �̸��� �迭�� ���� �ּ��ε� ���� �ּҿ� ���ڿ��� �����ϰ� �����Ƿ� �翬��
// ������ �߻��Ѵ�.
//