#include <stdio.h>

int main(void) {

	int array[3] = { 10,20,30 };

	// * ������ ����

	printf("%d %d %d \n", *(array + 0), *&array[0], array[0]);	// �迭�� 0�� ��ҿ� ������ ��
	printf("%d %d %d \n", *(array + 1), *&array[1], array[1]);	// �迭�� 1�� ��ҿ� ����� ��
	printf("%d %d %d \n", *(array + 2), *&array[2], array[2]);	// �迭�� 1�� ��ҿ� ����� ��
	// ���: *(array+i)==*&array[i]==array[i]�� ���� ���³��� ǥ��

	return 0;

}

// 1���� �迭���� *(array+i)==*&array[i]==array[i]�� ���� ǥ���Ѵ�.
// 
// Part2�� 1�忡�� *(array+i)==*&array[i]==array[i]�� ���� ��Ÿ���� ���� ǥ���̾���.
//