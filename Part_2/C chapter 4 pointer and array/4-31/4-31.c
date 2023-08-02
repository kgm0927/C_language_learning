#include <stdio.h>
int main(void) {

	const char *p = &"ABCD";

	printf("%s \n", p);
	printf("%s \n", p + 1);
	printf("%s \n", p + 2);
	printf("%s \n", p + 3);
	printf("%s \n", p + 4);
	printf("----------------------- \n");

	printf("%x %x \n", &"ABCD", p);

	return 0;
}
//
// 
// 4행에서 포인터 변수 &"ABCD"(문자열 상수의 시작 주소)를 저장한다. 주석 처리된 코드와 같은 표현이다.
// 6행부터 10행까지에서 포인터 변수 p를 통하여 문자열 상수가 저장된 메모리 공간의 주소를 출력한다.
// 
// 13행에서 문자열은 보통 주소로 관리되기 때문에 문자열 앞에 & 연산자를 붙이면 문자열의 시작 주소를 알 수 있다.
// 
// &"ABCD"와 p는 같은 결과가 출력된다.
//
