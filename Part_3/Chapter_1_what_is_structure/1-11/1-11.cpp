#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double english;
	double total;

};

int main(void) {
int i = 0;
	struct student stu[3]=
	{ {"20101323","Park",80,80,0},
	{"20101324","kim",95,85,0},
		{"20101325","Lee",100,90,0}
	};

	for ( i = 0; i < 3; i++)
	{
		stu[i].total = stu[i].math + stu[i].english;
		printf("�й� : %s, �̸�: %s \n", stu[i].no, stu[i].name);
		printf("���� : %lf \n", stu[i].total);
		printf("\n");
	}

	return 0;
}

//
// 15����� 19��������� ����ü ������ �迭�� �����ϰ� ���ÿ� �ʱ�ȭ�Ѵ�. �迭��Ҵ� 0���� �����ϱ� ������
// stu[0], stu[1], stu[2]�� �����ȴ�. 
// 
// 21����� 27������� �ݺ����� ����Ͽ� �迭 ��ҿ� ����� ���� �����͸� ����Ѵ�.
//