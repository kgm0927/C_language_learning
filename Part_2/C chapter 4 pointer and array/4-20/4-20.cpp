#include <stdio.h>
int main(void) {						// ������ �迭�� �ǹ̴� �ּҸ� �����ϴ� �迭�� �ǹ��Ѵ�. ���ݱ��� �迭���� ����
										// ����������, ������ �迭���� �ּҸ� �����Ѵ�.
	int a = 10, b = 20, c = 30;
	int* ap[3] = { NULL,NULL,NULL };

	ap[0] = &a;
	ap[1] = &b;
	ap[2] = &c;


	printf("%x %x %x \n", ap[0], ap[1], ap[2]);
	printf("%x %x %x \n", ap[0], ap[1], ap[2]);
	printf("%x %x %x \n", *(ap + 0), *(ap + 1), *(ap + 2));
	printf("----------------------- \n");

	printf("%d %d %d \n", *&a, *&b, *&c);
	printf("%d %d %d \n", *ap[0], *ap[1], *ap[2]);
	printf("%d %d %d \n", **(ap + 0), **(ap + 1), **(ap + 2));

	return 0;

}

//
// 
// 5�࿡�� ���̰� 3�� ������ �迭�� �����Ѵ�. 7����� 9������� ������ �迭�̹Ƿ� ap[0]�� a�� �ּ�(&a)�� �����ϰ�,
// ap[1]�� b�� �ּ�(&b)�� �����ϰ�, ap[2]�� c�� �ּ�(&c)�� �����Ѵ�.
// 
// 11����� 13��������� ���� a�� �ּ�(&a), b�� �ּ�(&b), c�� �ּ�(&c)�� ����Ѵ�. ap[i]==*(ap+i)�� ������ �ȴ�.
// 16����� 18��������� ���� �ڵ忡�� * �����ڸ� �̿��Ͽ� �ּҿ� ����� ���� ����Ѵ�.
// Ư���� ���� 18�࿡ * �����ڰ� �� �� ���Ǿ���. *(ap+i)�� �ּ��̱� ������ * �����ڰ� �� �� �� �ʿ��ϴ�.
// 
// 
//