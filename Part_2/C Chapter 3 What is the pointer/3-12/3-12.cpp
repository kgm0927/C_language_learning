#include <stdio.h>
int main() {
	int num = 10;
	int* ip = NULL;
	int** ipp = NULL;

	ip = &num;
	ipp = &ip;

	printf("%x %x %x \n",&num,&ip,&ipp);
	printf("%x %x %x \n", &num + 1, &ip + 1, &ipp + 1);

	printf("%d %x %x \n", num, ip, ipp);
	printf("%d %x %x \n", num + 1, ip + 1, ipp + 1);

	return 0;
}
//
// 
// 11�࿡�� �� ������ �ּ� &num, &ip, &ipp�� ����Ѵ�.
// 
// 12�࿡�� �� ������ �ּҿ� 1�� ���ؼ� &num+1, &ip+1, &ipp+1�� ����Ѵ�.
// &num+1�� int��(4Byte)��ŭ �����ϰڴٴ� �ǹ̷� 1 �����ϰ�, &ip+1�� 1���� ��������
// (4Byte)��ŭ �����ϰڴٴ� �ǹ̷� 1 �����Ѵ�. ���������� &ipp+1�� 2���� ��������(4Byte)��ŭ �����ϰڴٴ�
// �ǹ̷� 1 �����Ѵ�.
// 
// 
// 14�࿡�� �� ������ ����� �� num(10), ip(&num), ipp(&ip)�� ����Ѵ�.
// 
// 15�࿡�� �� ������ ����� ���� 1�� ���ؼ� num+1, ip+1, ipp+1�� ����Ѵ�.
// 
// 
//		num+1�� ��� ���� num�� 10�� ���ƵǾ� �־ ����� ���� 1�� ���ؼ� 11�� ����Ѵ�.
// 
//		ip+1�� ��� ip�� &num�� ����Ǿ� �־ &num+1�� ���� ǥ���� �Ǿ� &num�� int��(4Byte)��ŭ �����Ͽ�
//		�ּҸ� ����Ѵ�.
// 
//		ipp+1�� ��� ipp�� &ip�� ����Ǿ� �־ &ip+1�� ���� ǥ���� �Ǿ� &ip�� 1���� ��������(8Byte)��ŭ �����Ͽ�
//		�ּҸ� ����Ѵ�.
// 
//