#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;	// ����ü ���� s�� ����ü student�� ��� ������ ��� (��ø ����ü)
};

int main(void) {

	struct student stu = { 20101323,{90,80,0} };
	// struct student stu={20101323,{90,80,0}};
	stu.s.total = stu.s.math + stu.s.english;
	printf("�й� : %d \n", stu.no);
	printf("���� : %d \n", stu.s.total);

	return 0;
}

//
// 
// 18�࿡�� ����ü ���� stu�� �����ϰ� ���ÿ� �ʱ�ȭ�Ѵ�. {90,80,0}�� �߰�ȣ�� �׿� �ִµ�,
// 90�� stu.s.math�� ����ǰ�, 80�� stu.s.english�� ����Ǹ�, 0�� stu.s.total�� ����ȴ�.
// 
// 19���� �ּҰ� �κ��� 18��� ���� ����� ����Ѵ�. ���� ���̴� �߰�ȣ�� �ִ��� ���³� �̴�.
// �̷��� 19��ó�� �߰�ȣ�� �����ص� �����ʹ� ������� ����ȴ�.
//
