#include <stdio.h>

int* input();

int main() {
	
	int* p = NULL;

	p = input();
	printf("%d \n", *p);

	return 0;
}

int* input() {

	static int num1;
	scanf("%d", &num1);
	return &num1;
}





//
// 주소 반환 시 유용한 정적 변수
// 
// 정적(Static) 변수는 함수가 종료된 후에도 메모리 공간이 소멸되지 않고 남아 있다. 따라서
// 정적 변수를 사용하면 지역 변수의 주소를 반환해서 생기는 문제를 해결할 수 있다.
// 
// 
// 17행에서 정적 변수 num1을 선언한다. 19행에서 정적 변수 num1의 주소 (&num1)를 9행 포인터 변수 p에
// 반환한다. 정적 변수 num1은 input() 함수가 종료되어도 메모리 공간이 소멸되지 않고 남기 때문에
// 경고가 발생하지 않는다.
// 
//