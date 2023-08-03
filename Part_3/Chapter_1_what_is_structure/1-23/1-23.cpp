#include <stdio.h>

struct point
{
	int x;
	int y;
};

void function(struct point call);

int main(void) {
	struct point p =
	{
		10,20
	};
	function(p);
}

void function(struct point call) {
	printf("%d %d \n", call.x, call.y);
}
//
// 
// 1.5 구조체와 함수
// 
// 이제부터는 구조체와 함수에 대하여 공부한다. 구조체에서
// 함수를 사용하는 경우는 다음과 같이 두 가지이다.
// 
// 
// 1. 구조체를 함수의 인자로 전달하기(값에 의한 호출과 주소에 의한 호출)
// 
// 2. 구조체를 함수의 반환형으로 전달하기(값 반환과 주소 반환)
// 
// 
// 
// 
//			구조체를 함수의 인자로 전달하기- 값에 의한 호출과 주소에 의한 호출
// 
// 
// 다음 그림은 함수의 인자를 이용하여 값에 의한 호출을 보여주고 있다. 이처럼 함수의 인자에
// 구조체 변수를 전달하여 값에 의한 호출을 수행할 수 있다.
// 
// 
// void function(struct point a){
// 
// ...
// }
// 
// 위의 예제에서 struct point는 자료형이다. 두 덩어리로 표현되어 있어서
// 혼란이 있을 수 있지만(typedef로 한 덩어리로 만들 수 있다), struct point는
// 자료형이로 a는 변수 이름이라고 생각하면 함수의 인자로 구조체를 전달하는 방법은 
// 이해하기 쉽다.
// 
// 
// 
// 
// 14행에서 구조체 변수 p를 통해 19행의 function(struct point call)함수를 호출한다.
// 
// 19행에서 함수의 인자가 되는 구조체 변수 call에 p가 복사가 된다. 복사될 때 p의 멤버 변수의 데이터가
// call 멤버 변수에 복사된다.
// 
// 21행에서 구조체 변수는 call은 p를 복사했기 때문에 call.x와 call.y의 값을 출력한다.
//