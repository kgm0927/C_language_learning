#include <stdio.h>
int main() {

	int num1 = 10;
	int* ip1 = NULL;
	int** ip2 = NULL;
	int*** ip3 = NULL;


	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

	*ip1 = 20;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

	**ip2 = 30;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);


	***ip3 = 40;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);
	
	return 0;
}

//
// 
// 15�࿡�� �޸� ���� ip1�� �������� * �����ڸ� �� �� ����ؼ� ���� num1�� ���� 20����
// �����Ѵ�.
// 
// 18�࿡�� �޸� ���� ip2�� �������� * �����ڸ� �� �� ����ؾ� ���� num1�� ���� 30���� �����Ѵ�.
// 
// 21�࿡�� �޸� ���� ip3�� �������� * ������ �� ���� ����ؼ� ���� num1�� ���� 40���� �����Ѵ�.
//