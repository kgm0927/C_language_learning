#include <stdio.h>

struct point {
	
	int x;
	int y;
};

void function(struct point* call);

int main(void) {

	struct point p=
	{
		10,20
	};

	function(&p);

	return 0;
}


void function(struct point* call) {
	printf("%d %d \n", call->x, call->y);
	printf("%d %d \n", (*call).x, (*call).y);
}
//
// void function(struct point *a){
// 
// }
// 
// 위의 그림에서 struct point *은 자료형이고 a는 구조체 포인터 변수의 이름이다. 
// a는 포인터 변수이므로 구조체 변수의 주소를 저장할 수 있다. 이와 같이 함수의 인자에
// 구조체 포인터 변수를 전달하여 '주소에 의한 호출'을 수행할 수 있다.
// 
// 
// 14행에서 구조체 변수의 주소 &p를 통해
// 
// 19행의 function(struct point *call)함수를 호출한다. 19행에서 구조체 포인터 변수
// call에 &p가 저장된다. 이것이 주소에 의한 호출이다.
// 
// 21행과 22행에서 구조체 포인터 변수 call은 &p를 저장하고 있기 때문에 13행의 데이터 10과
// 20에 접근할 수 있다. call=>y와 (*call).y는 같은 표현이다.
// 
// 
// 
//