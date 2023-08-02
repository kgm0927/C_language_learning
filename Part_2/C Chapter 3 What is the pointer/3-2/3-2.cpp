#include <stdio.h>
int main(void) {
	

	char* cp = NULL;
	int* ip = NULL;


	printf("%x %x %x \n", &cp, cp, *&cp);// char형 주소를 저장하는 포인터 변수 cp
	printf("%x %x %x \n", &ip, ip, *&ip);// int형 주소를 저장한는 포인터 변수 ip


	printf("%d %d \n", sizeof(char*), sizeof(int*)); // 4
	printf("%d %d \n", sizeof(cp), sizeof(ip));		// 4


	return 0;
}

//
// 
// 5행과 6행에서 포인터 변수를 선언한다. 선언한 포인터 변수의 이름은 cp(byte), ip(byte)이다.
// 자료형 다음에 * 연산자가 붙어 있는 변수를 모두 포인터 변수라고 한다.
// 
// 
// 8행: &cp(변수 cp의 주소), cp(변수 cp의 메모리 공간,0), *&cp(변수 cp의 메모리 공간)를 출력한다.
// 
// 9행 : &ip(변수 ip의 주소), ip(변수 ip의 메모리 공간,0), *&ip(변수 ip의 메모리 공간, 0)를 출력한다.
// 
// 
// 11행과 12행에서 포인터 변수의 크기는 모두 4바이트이다(64비트환경에서는 8바이트이다). 
// 
// 
// 다음으로 한가지 알고 있어야 하는 것은 다양한 타입(Type)의 포인터 변수가 있는 이유이다. 포인터 변수로
// 변수를 참조하는 경우 몇 바이트씩 참조해야 하는지를 알려주기 위해서이다.
//