#include <stdio.h>		// 이제 5-14에서 받았던 코드의 에러를 수정해 보겠다.
void main() {
	char c = 3;
	double d = 3.1;

	void* vx = NULL;
	vx = &c;

	printf("vx가 저장한 값: %x \n", vx);
	printf("*vx의 값: %d \n", *(char*)vx);

	vx = &d;
	printf("vx가 저장한 값: %x \n", vx);
	printf("*vx의 값 : %lf", *(double*)vx);
}

//
// 
// void형 포인터 변수는 아무 자료형의 주소를 저장할 수 있지만, *연산자로 값을 간접 접근할 수 없다.
// 따라서 11행과 15행과 같이 강제 형변환이 필요하다.
// 
// 
// 
//								// 1) vx의 주소를 char 형 주소로 강제 형변환
// 11행:			*(		char*			)   vx
//				2) 강제 형 변환된 주소에 저장된 값을 참조