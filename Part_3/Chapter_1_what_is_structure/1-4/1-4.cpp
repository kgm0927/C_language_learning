#include <stdio.h>

struct point {
	int x;
	int y;

};

int main(void) {
	struct point p1 = { 10,20 };
	struct point p2 = { 30,40 };
	struct point p3 = { 0,0 };

	p3.x = p2.x - p1.x;
	p3.y = p2.y - p1.y;

	printf("%d %d \n", p3.x, p3.y);

	return 0;
}

//
// 11행부터 13행까지에서 구조체 변수 p1, p2, p3를 선언하고 동시에 초기화한다.
// 15행과 16행에서 구조체 변수 p3를 이용하여 p3.x와 p3.y에 결과를 저장한다.
// 
// 
// 앞의 두 예제를 보면 구조체 변수를 선언하고 동시에  초기화할 때 중괄호 내에
// 멤버 변수들의 값을 순서대로 적었다.
// 그러나 다음처럼 구조체 변수의 선언과 구조체 변수의초기화를 따로 하면 에러가 발생한다.
// 
// struct point p1;
// p1={10,20};
// 
// 
// 
// 
// 
//
