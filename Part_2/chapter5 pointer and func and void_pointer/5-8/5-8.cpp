#include <stdio.h>

int* func();

int main(void) {

	int* p = NULL;
	p = func();

	printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d \n",*(p+0),*(p+1),*(p+2),*(p+3));
	return 0;
}

int* func() {
	int array[] = { 10,20,30,40 };
	return array;
}

//
// 17�࿡�� int array[]�� ���� �����̴�. 18�࿡�� 1���� �迭�� ���� �ּ�(�迭 �̸��� �ּ�)
// �� 8�� ������ ���� p�� ��ȯ�Ѵ�. 1���� �迭 array�� ���� �����̹Ƿ� func �Լ��� ����Ǹ鼭
// �޸� ������ �Ҹ��ϱ� ������ ������ �ȴ�.
//