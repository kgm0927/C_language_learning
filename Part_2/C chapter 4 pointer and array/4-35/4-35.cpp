
// 3: 포인터 변수를 통해 메모리 공간의 주소와 값 모두 변경하지 못하게 한다.

#include <stdio.h>	// 포인터 변수를 상수화 하는 방법 중 세 번째로 포인터 변수를 통해 메모리 공간의 주소와 값 모두 변경하지 못하게 하는 예제이다.
int main(void) {
	char a = 'A';
	char b = 'B';
	const char* const p = &a;

	printf("%c \n", *p);
	printf("%c \n", a);

	a = 'X';
	b = 'C';

	printf("%c \n", a);
	printf("%c \n", b);

	// p = &b;	// 에러
	// *p = 'D';// 에러

	return 0;
}

//
// 
// 따라서 하나의 공유 데이터를 놓고 여러 개발자들이 함께 사용해야 하는 경우는 프로그램의 안정성의 경우에는
// const 키워드를 사용해야 한다.
//