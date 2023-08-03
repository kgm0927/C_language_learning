#include <stdio.h>

int* func();

int main(void) {

	int* p = NULL;
	p = func();

	printf("%d %d %d %d \n", p[0], p[1], p[2], p[3]);
	printf("%d %d %d %d \n",*(p+0),*(p+1),*(p+2),*(p+3));
	return 0;
}

int* func() {
	int array[] = { 10,20,30,40 };
	return array;
}

//
// 17행에서 int array[]는 지역 변수이다. 18행에서 1차원 배열의 시작 주소(배열 이름은 주소)
// 를 8행 포인터 변수 p에 반환한다. 1차원 배열 array는 지역 변수이므로 func 함수가 종료되면서
// 메모리 공간이 소멸하기 때문에 문제가 된다.
//