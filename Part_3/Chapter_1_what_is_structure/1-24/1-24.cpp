#include <stdio.h>

struct point {
	
	int x;
	int y;
};

void function(struct point* call);

int main(void) {

	struct point p=
	{
		10,20
	};

	function(&p);

	return 0;
}


void function(struct point* call) {
	printf("%d %d \n", call->x, call->y);
	printf("%d %d \n", (*call).x, (*call).y);
}
//
// void function(struct point *a){
// 
// }
// 
// ���� �׸����� struct point *�� �ڷ����̰� a�� ����ü ������ ������ �̸��̴�. 
// a�� ������ �����̹Ƿ� ����ü ������ �ּҸ� ������ �� �ִ�. �̿� ���� �Լ��� ���ڿ�
// ����ü ������ ������ �����Ͽ� '�ּҿ� ���� ȣ��'�� ������ �� �ִ�.
// 
// 
// 14�࿡�� ����ü ������ �ּ� &p�� ����
// 
// 19���� function(struct point *call)�Լ��� ȣ���Ѵ�. 19�࿡�� ����ü ������ ����
// call�� &p�� ����ȴ�. �̰��� �ּҿ� ���� ȣ���̴�.
// 
// 21��� 22�࿡�� ����ü ������ ���� call�� &p�� �����ϰ� �ֱ� ������ 13���� ������ 10��
// 20�� ������ �� �ִ�. call=>y�� (*call).y�� ���� ǥ���̴�.
// 
// 
// 
//