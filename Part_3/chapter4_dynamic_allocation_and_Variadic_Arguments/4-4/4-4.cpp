#include <stdio.h>
#include <stdlib.h>
int main(void) {

	int i = 0;
	int* p = (int*)calloc(sizeof(int), sizeof(int));

	if (p == NULL)
		printf("�� ������ ���� �޸� �Ҵ� ���� \n");

	for ( i = 0; i < 4; i++)
	{
		p[i] = i;
		printf("�ּ� : %x \n", &p[i]);
		printf("�� : %d \n", p[i]);
	}

	free(p);
	p = NULL;

	return 0;
}

//
// 
// 6�࿡�� calloc() �Լ��� �̿��Ͽ� ���� �޸𸮸� �Ҵ��Ѵ�. calloc() �Լ��� ���ڸ� ���� sizeof(int)�� �ΰ�
// �ִ�. sizeof(int)�� 4 �̹Ƿ� 6���� (int*)calloc(4,4)�� ���� �ȴ�. �̰��� �ǹ̴� 4*4 ��, 16����Ʈ ���� �޸𸮸� �� ������
// �Ҵ��϶�� �ǹ��̴�. 
//


//
// 
// calloc() �Լ��� free() �Լ�
// 
// calloc() �Լ��� malloc() �Լ��� ���� ����� �Ѵ�. ��, �� ������ 
// ���� �޸𸮸� �Ҵ��ϴ� ���� �����ϸ�, ����ϴ� ����� �ణ �ٸ���.
// 
// 
// 
// #include <stdlib.h>
// void* calloc(size_t num,size_t size);
// void free(void* p);
// 
// 
// 
// �ڼ������� �� �� �� �Լ� ���̿� ���̰� �ִ�. calloc() �Լ��� �Է� ���ڴ� �� ��,
// malloc() �Լ��� �Է� ���ڴ� �� ���̴�. calloc() �Լ��� num*size ��ŭ�� ũ�⸦ �Ҵ��Ѵ�.
// 
// 
// int* p1=calloc(4,4); �Լ��� �Է� ���� 2��
// int* p2=malloc(16); �Լ��� �Է� ���� 1��
// 
//