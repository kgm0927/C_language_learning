#include <stdio.h>

typedef struct score {	// ����ü���� typedef�� ����ϴ� ��� 1
	
	double math;
	double english;
	double average;
} SCORE;

struct student {

	int no;
	SCORE s;	// struct score s;
};

typedef struct student STUDENT;			// ����ü���� typedef�� ����ϴ� ���

int main(void) {
	STUDENT stu = { 20101323,{90,80,0} };

	stu.s.average = (stu.s.math + stu.s.english) / 2;
	printf("���: %d \n", stu.no);
	printf("��� ���� : %lf \n", stu.s.average);

	return 0;
}
//
// 
//��� typedef�� ��� ����� ���ؼ� �����ְڴ�.
// 
//		typedef				int				mytype;
//		// �ڷ��� ������	//�ڷ���		// �� �̸�
//			Ű����			
// 
// typedef�� �̿��Ͽ� ���� �ڷ������� �� �̸��� �ο��� �� �ִ�. �ִ� ����ü������ �����ϴ�
// 
// 
// 3����� 8��������� ����ü ���ǿ� ���ÿ� typedef�� ����ؼ� struct score�� SCORE��
// ������ �Ѵ�.
// 
// ���� 13���� 'SCORE s'�� 'struct score s'�� ����. 10����� 14�డ������ ����ü student�� �����Ѵ�.
// 
// 
// 
// 10�࿡�� 14��������� ����ü student�� �����Ѵ�.
// 
// 16�࿡�� typedef�� ����ؼ� struct student�� STUDENT�� ������ �Ѵ�. �׷��� ����ü�� ���ǰ� �����Ǿ�
// �ִ�. ��, struct student�� ���� ����ü ���Ǵ� 10����� 14��������� �߱� ������ �����ص� �ȴ�.
// 20�࿡�� 'STUDENT stu'�� 'struct student stu'�� ����.
// 
// 
// �������ڸ� ����ü���� typedef �� ����� �� 3�࿡�� 8��ó�� ����ü ���ǿ� ���ÿ� typedef���� �����ϴ�
// ����� 10�࿡�� 16��ó�� ����ü ���ǿ� ���������� typedef���� �����ϴ� ����� �ִ�.
// 
// 
//