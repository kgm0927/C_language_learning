#include <stdio.h>
int main() {

	char* p = "Good morning";
	char* q = "C-language";
	char* array[2] = {"Good morning","C-language"};

	printf("%s \n", p);
	printf("%s \n", q);
	printf("--------------------- \n");

	printf("%s \n", array[0]);
	printf("%s \n", array[1]);
	printf("--------------------- \n");

	printf("%s \n", p + 5);
	printf("%s \n", p + 2);
	printf("--------------------- \n");

	printf("%s \n", array[0] + 5);
	printf("%s \n", array[1] + 2);

	return 0;
}
//
// 
// 4��� 5�࿡�� ������ ���� p�� ���ڿ� Good morning�� ���� �ּҷ� �����ϰ�, ������ ���� q�� ���ڿ� C-language�� ���� �ּҷ� �����Ѵ�.
// 
// 6�࿡�� ������ �迭�� �����Ѵ�. array[0]�� ���ڿ� Good mornin�� �������� ���� �ּҸ� �����ϰ�, array[1]�� ���ڿ� C-language�� ���� �ּҸ� �����Ѵ�.
// 8��� 9�࿡�� ������ ���� p�� q�� ���� ���ڿ��� ����Ѵ�.
// 
//