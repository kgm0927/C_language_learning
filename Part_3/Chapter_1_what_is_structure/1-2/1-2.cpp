#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct group {
	int a;
	double b;
};

int main(void) {

	struct group g1;
	scanf("%d %lf", &g1.a, &g1.b);

	printf("g1.a의 값 : %d \n", g1.a);
	printf("g1.b의 값: %lf \n", g1.b);

	return 0;
}

//
// 
// 앞의 두 예제로 살펴 본 것처럼 구조체 변수로 멤버 변수에 접근할 때 접근(.)
// 연산자를 사용한다. 구조체 변수를 적고 점(Dot)을 찍은 다음에 접근할 멤버 변수를
// 적으면 된다.
// 
//	
//					g1		.					a;
//			// 구조체 변수	// 접근 연산자		// 멤버 변수
//
// 
//	구조체 변수 : 멤버 변수에 접근하게 해 주는 구조체 변수의 이름을 지정
//	접근 연산자 : 구조체 변수로 멤버 변수에 접근하기 위해 연산자를 지정
//	멤버 변수 : 접근하려는 멤버 변수의 이름을 지정
//
