#include<stdio.h>
void add(int num1, int num2);
void substract(int num1, int num2);

int main() {
	
	int x, z;
	char c;
	void (*pointer)(int, int);

	printf("add �Լ��� �ּ� : %x \n", add);
	printf("substract �Լ��� �ּ� : %x \n", substract);
	printf("�Է� : ");

	scanf("%d %c %d", &x, &c, &z);

	if (c == '+')
		pointer = add;

	else if (c == '-')
		pointer = substract;

	else
		printf("�� ��° �����ڴ� '+'�Ǵ� '-'�� �Է��ϼ���. \n");

	pointer(x, z);

	return 0;

}

void add(int num1, int num2) {
	int result;
	result = num1 + num2;
	printf("%d+ %d = %d �Դϴ�.", num1, num2, result);
}

void substract(int num1, int num2) {
	int result;
	result = num1 - num2;
	printf("%d- %d = %d �Դϴ�.", num1, num2, result);
}

//
// 
// 9�࿡�� �Լ� ������ pointer�� �����Ѵ�. ��� ���´� void�̰� �Է� ���´� int�� 2���̴�.
// 17����� 21��������� ���� Ű����κ��� ���� ���ڸ� ������ ���� c�� '+'��� �Լ� ������
// pointer�� add�� �����ϰ� '-'��� �Լ� ������ pointer�� substract�� �����Ѵ�.
// 
// 
// 26�࿡�� �Լ� ������ pointer�� ���� �Լ� ȣ���� ���������� �����ϰ� �ִ�.
// 
// 
//

