#include <stdio.h>

char* string1(void);
char* string2(void);

int main(void) {
	
	char* p1 = NULL;
	char* p2 = NULL;

	p1 = string1();		// 함수의 호출
	p2 = string2();		// 함수의 호출

	printf("%s \n", p1);
	printf("%s \n", p2);
	return 0;
}

char* string1(void) {		// 함수의 정의

	static char str[] = "Good";	// 정적 변수의 선언
	return str;					// 배열의 시작 주소 반환
}

char* string2(void) {// 함수의 정의

	static char str[] = "morning";	// 정적 변수의 선언
	return str;						// 배열의 시작 주소 반환
}

//
// 
// 21행에서 1차원 문자열 배열을 정적 변수로 선언하고 초기화한다.
// 
// 22행에서 배열의 시작 주소 str(문자 G를 가리키는 주소) 11행 p1에 반환한다.
// 
// 11행에서 최종적으로 p1은 문자열 배열의 시작 주소 즉,문자 G를 가리키는 주소를 저장한다.
// 
// 
// 27행에서 1차원 문자열 배열을 정적 변수로 선언하고 초기화한다.
// 
// 28행에서 배열의 시작 주소 str(문자 m을 가리키는 주소)을 12행 p2에 반환한다.
// 12행에 최종적으로 p2는 문자열 배열의 시작 주소, 즉 문자를 m을 가리키는 주소를 저장한다.
//