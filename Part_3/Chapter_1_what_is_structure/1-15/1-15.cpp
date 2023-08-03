#include <stdio.h>

struct point
{
	int* x;
	int* y;
};

int main(void) {
	int num1 = 4;
	int num2 = 5;
	struct point p1;

	p1.x = &num1;
	p1.y = &num2;

	printf("%d %d \n", num1, num2);
	printf("%d %d \n", *p1.x, *p1.y);

	return 0;
}
//
// 
// 5행과 6행에서 멤버 변수로 1차원 포인터 변수 x와 y를 선언한다. 13행에서 구조체 변수로
// p1을 선언한다.
// 
// 13행에서 구조체 변수로 p1을 선언한다. 
// 
// 15행과 16행에서 구조체 변수 p1과 .연산자를 통해 포인터 변수 x와 y에 접근한다.
// p1.x에 &num1(변수 num1의 주소)를 저장하고, p1.y에 &num2(변수 num2의 주소)를 저장한다.
// 
// 
// 19행에서 .연산자가 * 연산자보다 우선순위가 높기 때문에 *p1.x는 p1.x부터 수행한다. p1.x에
// 저장된 값은 &num1이다. 결국, *p1.x는 *&num1과 같은 포현이고 *&은 서로 상쇄된다.
//

