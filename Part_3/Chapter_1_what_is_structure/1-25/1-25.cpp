#include <stdio.h>

struct point {

	int x;
	int y;
};

struct point function(void);// 함수의 선언

int main(void) {

	struct point p;
	p = function();// 함수 호출
	printf("%d %d \n", p.x, p.y);

	return 0;
}

struct point function(void)
{
	struct point all = { 10,20 };
	return all;		// 구조체 변수 call을 14행으로 반환
};

//
// 
//		구조체를 함수의 반환형으로 전달하기 - 값 반환과 주소 반환
// 
// 
// 함수의 반환형으로 구조체를 전달하는 방법은 값 반환과 주소 반환이 있다.
// 
//		
// 
//		* 반환 형태 : 함수가 반환해야 할 구조체 변수의 자료형을 지정
//		* 구조체 변수 이름: 함수의 결과로 반환해야 하는 구조체 변수의 이름을 지정
// 
// 
// 함수의 결과로 구조체 변수를 반환할 때는 구조체 키워드 struct와 구조체 이름을 함수의 반환 형태로
// 지정해야 하고, return 키워드에 반환할 구조체 변수의 이름을 지정해야 한다.
// 
// 
// 14행에서 function() 함수를 통해 20행의 struct point function(void) 함수를 호출해야 한다. 이 함수는
// struct point형을 반환하는 함수이다.
// 
// 22행에서 구조체 변수 call을 선언하고 대입 연산을 한다. 23행에서 struct point형 구조체 변수 call(멤버 변수 포함)을
// 14행 p로 반환한다. 14행에서는 p에 call을 저장한다. 여기서 p는 call의 멤버 변수도 복사한다. 15행에서 p의 멤버 변수들을
// 출력한다. 이처럼 함수의 반환형으로 구조체 변수를 전달하여 값을 호출 영역으로 반환한다.
//