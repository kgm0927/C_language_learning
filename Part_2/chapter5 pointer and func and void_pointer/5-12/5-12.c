#include<stdio.h>

int main(int argc, char* argv[]) {


	int i = 0;
	printf("���ڿ� ��: %d \n", argc);

	for ( i = 0; i < argc; i++)
	{
		printf("argc[%d] : %s \n", i, argv[i]);
	}
}


//
// ����ü ��� ����� �Ǵ� ���ϱ�? �ش��� main() �Լ��� ���ڵ��� int argc�� char* argv[]�� ���ҿ� �ִ�.
// 
// 
//		int argc ���ڿ��� ���� ����
//		char* argv[] ���ڿ��� ù ��° �ּҸ� ����
// 
// 
// 
// 
// ���� ������ �����ϱ� ���� �������� ���� â�� �����Ӽ�-> �����-> ����μ� �� 'Good morning C Language'�� �Է��Ѵ�.
// 
// 
// ���:
// ���ڿ� ��: 5
// argc[0] : C:\Users\kgm09\source\repos\chapter5 pointer and func and void_pointer\x64\Debug\5 - 12.exe
// argc[1] : Good
// argc[2] : Morning
// argc[3] : C
// argc[4] : Language
// 
// 
// 3�࿡�� ���� ���� ȭ�鿡��ó�� �ϸ� ���ڿ��� ���� ���� ��θ� �����Ͽ� �� 5���̹Ƿ� argc=5�� �����ǰ�,
// ���ڿ��� �ּҸ� �����ϴ� ������ �迭���� char* argv[5]�� �����ȴ�.
// ������ ��� argv[0], argv[1], argv[2], argv[3], argv[4] ������ ���ڿ� �迭�� ���� �ּҸ� �����Ѵ�.
// 
// 
// 6�࿡�� ���� argc�� ����� ���� ����Ѵ�. 10�࿡�� ������ �迭 argv[0], argv[1], argv[2],argv[3],argv[4]�� �����
// �ּҵ鿡 �ִ� ���ڿ��� ���� ���� %s�� �̿��ؼ� �����Ѵ�.  
// 
// 10�࿡�� ������ �迭 argv[0], argv[1], argv[2], argv[3], argv[4]�� ����� �ּҵ鿡 �ִ� ���ڿ��� ���� ���� %s�� �̿��ؼ�
// ���� ����(\0)�� ���������� ����Ѵ�.
//