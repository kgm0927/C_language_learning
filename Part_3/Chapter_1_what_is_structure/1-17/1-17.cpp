#include <stdio.h>

struct point
{
	int x;
	int y;
};

int main(void) {
	struct point p1 = { 20,30 };
	printf("구조체 변수 p1의 주소: %x \n", &p1);
	printf("멤버 변수 p1.x의 주소: %x \n,", &p1.x);

	return 0;
}
// 구조체 변수 p1의 주소: 4a37f7e8
// 멤버 변수 p1.x의 주소 : 4a37f7e8
// 
// 
// 다음 그림을 보면 구조체 변수 p1의 시작 주소인 &p1과
// 구조체의 첫 번째 멤버 변수 p1.x의 주소인 &p1.x의 주소가 같다.
// 
// 
//