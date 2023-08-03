#include <stdio.h>

struct point {
	
	int x;
	int y;
};

int main(void) {

	struct point p1 = { 10,20 };
	struct point p2 = { 0,0 };

	p2 = p1;

	printf("%d %d \n", p1.x, p1.y);
	printf("%d %d \n", p2.x, p2.y);

	return 0;
}

//
// 
// 
// 구조체 변수의 복사
// 
// 다음 예를 보면 변수 a의 값 3을 변수 b에 복사하고 있다.
// 변수 a와 b 모두 int형이기 때문이다.
// 
// 
// 
// int a=3;
// int b=0;
// b=a;		// 변수의 복사
// printf("%d %d \n", a,b);
// 
// 
// 이렇듯 구조체 변수도 서로 복사가 가능하다.
// 
// struct point p1={10,20};
// struct point p2={0,0};
// 
// p2=p1;		// 구조체 변수의 복사
//