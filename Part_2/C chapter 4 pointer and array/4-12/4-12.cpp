#include <stdio.h>	//	*(array+i)==array[i]==*&array[i] ���� ����.
int main()
{
int array[3][3] = { 10,20,30,40,50,60,70,80,90 };

printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);
printf("%x %x %x \n", &array[2][0], &array[2][1], &array[2][2]);
printf("----------------------- \n");

printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);
printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);
printf("%d %d %d \n", *&array[2][0], *&array[2][1], *&array[2][2]);
printf("----------------------- \n");

printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);

return 0;
}


//
// �����Ϳ� 2���� �迭
// 
// 2���� �迭���� *(array+1)==*&array[i]==array[i]�� �ּҸ� ǥ���Ѵ�.
// 
// 
// * 1���� �迭�� �� *(array+i)==array[i]==*&array[i]�� ��
// * 2���� �迭�� �� *(array+i)==array[i]==*&array[i]�� �ּ�
// 
// 
// 
// 
// 6����� 9����� & �����ڸ� �̿��Ͽ� 2���� �迭�� ��ҵ��� �ּҸ� ����Ѵ�.
// 2���� �迭 array�� int���̹Ƿ� �� ���� 4����Ʈ��ŭ ���̰� ����.
// 
// 11����� 14��������� * �����ڸ� �̿��Ͽ� 2���� �迭�� ����� ������ ����Ѵ�.
// 
// 16����� 18��������� *&�� ���� ���Ǳ� ������ 11����� 14������� �����
// ���� ��µȴ�.
// 
//