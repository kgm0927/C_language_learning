#include  <stdio.h>

struct point
{
	int x;
	int y;
};


struct point* function(void) {
	static struct point call = { 10,20 };
	return &call;
}

int main(void) {

	struct point* p;
	p = function();
	printf("%d %d \n", p->x, p->y);
	printf("%d %d \n", (*p).x, (*p).y);

	return 0;
	

}


//
// 
// 다음 그림은 구조체 변수의 주소를 반환하는 함수의 형태를 보여준다. 구조체 변수의 
// 주소를 반환하는 함수의 형태는 모든 멤버 변수들을 참조할 수 있는 주소를 반환하는
// 함수의 형태라고 말할 수 있다.
// 
// 
// struct point* function(){
// 
// static struct point p={10,20};
// return &p}
// 
// * 반환 형태: 함수가 반환해야 할 구조체 변수의 자료형을 지정
// * 구조체 변수의 주소: 함수의 결과로 반환해야 하는 구조체 변수의 주소를 지정
// 
// 
// 함수의 결과로 구조체 변수의 주소를 반환할 때는 구조체 키워드 struct와 구조체 이름 뒤에
// * 연산자를 붙여서 함수의 반환 혀태로 지정해야 하고, return 키워드에 반환할 구조체 변수의
// 주소를 지정해야 한다.
// 
// 
// 
// 14행에서 function() 함수를 통해 21행의 struct point* function(void) 함수를 호출한다. 이 함수는
// struct point*형 즉, 구조체의 주소를 반환하는 함수이다. 23행에서 구조체 변수 call을 선언하고 대입
// 연산을 수행한다. 그런데 static 키워드가 붙어 있는데 이유는 24행에 있다.
// 
// 
// 24행에서 struct point*형 즉, 구조체 변수 call의 주소 &call을 13행 p로 반환한다. 구조체 변수 call이
// static으로 선언되지 않았다면 call은 지역변수가 되어 14행의 구조체 포인터 변수 p에 &call은 저장이 되지만
// p로 call에 간접접근을 할 수가 없게 된다. 
// 
// 지역변수 call은 함수가 종료가 되면 사라지게 되므로 간접접근이 불가능하다.
// 
// 14행에서 p에 &call을 저장한다. 15행과 16행에서 같은 결과를 출력하는 방법으로 p는 &call를 저장하고 있기에 p로
// call의 모든 멤버 변수에 접근할 수 있다.
// 
//