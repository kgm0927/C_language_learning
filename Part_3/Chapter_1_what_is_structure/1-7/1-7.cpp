#include <stdio.h>

struct score {
	
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;		// ����ü ���� s�� ����ü student�� ��� ������ ��� (��ø ����ü)
};

int main(void) {

	struct student stu;

	stu.no = 20101323;
	stu.s.math = 90;
	stu.s.english = 80;
	stu.s.total = stu.s.math + stu.s.english;

	printf("�й� : %d \n", stu.no);
	printf("���� : %lf \n", stu.s.total);

	return 0;
}


//
// 
// ��ø ����ü�� ����ü ���� ����ü�� ���ԵǾ� �ִٴ� �ǹ��̴�. ��, ��� ������ ����ü ������ ����ϰ�
// �ȴ�.
// 
// 
// 3����� 8��������� score ��� �̸��� ����ü�� �����Ѵ�. 10����� 14��������� student��� �̸��� ����ü��
// �����Ѵ�.
// 
// 10����� 14��������� student��� �̸��� ����ü�� �����Ѵ�. �׷��� ����ü student�� ��� ������ 'struct score s' ��,
// ����ü ���� s�� ���ԵǾ� �ִ�.
// 
// 18�࿡�� ����ü student�� ��� ������ ������ �� �ִ� ����ü ���� stu�� �����Ѵ�.
// 
// 20�࿡�� ����ü ���� stu�� ���� ����ü student�� ��� ���� no�� �����͸� �����Ѵ�.(stu.no)
// 
// 
// 21�࿡�� ����ü ���� stu�� ����ü student�� ��� ���� s�� �����ϰ�, ������� s�� ����ü score�� ��� ������
// ������ �� �ִ� ����ü ������ �Ǳ� ������ ����ü score�� ��� ���� math, english, total�� ������ �� �ִ�.
// 
// 
// �̿� ���� . ������ �� ���� �̿��ؼ� ��ø ����ü�� �����ϴ� ���� �����ϴ�.
//
