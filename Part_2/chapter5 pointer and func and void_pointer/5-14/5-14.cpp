#include <stdio.h>
int main(void) {
	char c = 3;
	double d = 3.1;

	void* vx = NULL;

	vx = &c;
	printf("vx의 주소 값: %x \n", vx);
	//printf("vx의 값: %d \n", *vx);//	에러

	vx = &d;
	printf("vx의 주소 값 : %x \n", vx);
	// printf("vx의 주소 값: %x \n", vx);	// 에러

	return 0;
}

//
// 
// void형 포인터에서 void는 '~이 하나도 없는'이라는 의미이다. 따라서 void형 포인터는 자료형이 없는
// 포인터 변수라는 의미이다. 즉, 자료형에 제약을 받지 않고, 아무 자료형의 주소라도 저장할 수 있는 포인터 변수이다.
// 
// 
// 11행과 15행은 에러가 발생하는 부분이다. 왜 일까? 9, 13행의 void*형 포인터 변수 vx는 다양한 자료형의 주소를 저장할 수 있다.
// 즉 주소만 저장할 수 있으며, 값을 저장하거나 변경할 수는 없다.
//