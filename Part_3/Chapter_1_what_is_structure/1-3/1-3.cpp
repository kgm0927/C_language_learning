#include <stdio.h>

struct point {
	int x;
	int y;
};

int main(void) {
	struct point p1 = { 10,20 };	// 구조체 변수의 초기화

	printf("%d %d \n", p1.x, p1.y);
	return 0;
}
//
// 
// 구조체 변수도 일반 변수처럼 초기화 할 수 있다. 초기화를 할 때는 값들을 중괄호로 묶는다.
// 다음 예제는 구조체 변수를 초기화하는 코드이다.
// 
// 3행부터 7행까지에서 point라는 이름의 구조체를 정의한다. 11행에서 중괄호를 이용하여 구조체 변수 p1을
// 선언하고 동시에 초기화한다.
//