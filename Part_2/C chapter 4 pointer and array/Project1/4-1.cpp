#include <iostream>
int main() 
{
	int array[3] = { 10,20,30 };

	printf("%x %x %x \n", array, array + 0, &array[0]);
	printf("%x %x \n", array + 1, &array[1]);
	printf("%x %x \n", array + 2, &array[2]);

	printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(&array[0]));
							// 12			// 4				// 4
	return 0;
}

//
//
// 
// �迭 �̸��� �迭 ���� �ּ��̴�.
// 
// �迭�� �̸��� �迭 ��ҿ� �����ϱ� ���� �� �ʿ��ϴ�. 
// 
// 6�࿡�� �迭 �̸� array, array+0, &array[0]�� ����Ѵ�. 0���� ����� �ּ�,
// �� ���� �ּҸ� ����Ű�� �ִ�.
// 
// 7��� 8�࿡�� array+1, &array[0] �׸��� array+2, &array[2]�� ����Ѵ�.
// 
// 
// 10 �࿡�� array,array+0, &array[0]�� ũ�⸦ ����մϴ�. Ư���� ���� �迭 �̸��� array�� ũ���
// ���� �ּҸ� ����Ű�� ������ ũ�Ⱑ �ٸ���. ������ array+0�� �ǹ̴� 0�� ����� �ּ�(4����Ʈ �޸� ������
// �ּ�)�� �ǹ��ϰ� array�� �迭�� ���� �ּ�(12����Ʈ �޸� ������ �ּ�)�� �ǹ��ϱ� �����̴�.
//