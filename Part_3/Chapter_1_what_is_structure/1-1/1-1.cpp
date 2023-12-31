#include <stdio.h>
struct group {
	int a;
	double b;
};


int main(void) {
	
	struct group g1;

	g1.a = 10;
	g1.b = 1.1234;

	printf("g1.a의 값 : %d \n", g1.a);
	printf("g1.b의 값 : %d \n", g1.b);

	return 0;
}

//
//
// 
// 1.1 구조체란
// 
// 구조체란 하나 이상의 변수를 묶어 그룹화하는 사용자 정의 자료형이다. 그룹화할 때
// 같은 자료형을 가진 변수들을 묶어 그룹화할 수 있고, 서로 다른 자료형을 가진 변수들을 묶어
// 그룹화할 수 있다.
// 
// 
// 이처럼 구조체는 기본 자료형을 묶어서 만들게 된다.
// 
// 
// 
// 구조체 정의
// 
// 구조체를 정의한다는 의미는 구조체를 만든하는 의미와 같다. 실제적으로 구조체 정의는 구조체 이름,
// 구조체 멤버 변수를 만드는 행위이다. 다음은 정의하는 방법이다.
// 
// 
//			// 구조체 키워드	// 구조체 이름
//			struct			point
// {
//				int x;
//				int y;// 구조체 멤버 변수
// };
// 
//		구조체 키워드 : 구조체의 시작을 알리는 struct 키워드 지정
//		구조체 이름: 구조체를 구분하는 이름(동아리 이름)
//		멤버 변수: 구조체를 구성하는 구조체 멤버 변수의 이름
// 
// 
// 마지막의 세미콜론은 구조체 정의를 종료한다는 의미이다.
// 이렇게 정의된 구조체를 우리는 '사용자 정의 자료형'이라고 한다.
// 
// 
// 
// 
// 
//					구조체 변수
// 
// 구조체 변수란 멤버 변수에 접근하게 해 주는 변수를 의미한다. 그럼 정의된 구조체로 구조체 변수를 선언하는 방법을
// 알아본다. 선언 방법은 2가지이다.
// 
// 
// struct point{
// int x;
// int y;
// } p1,p2,p3;
// 
// p1,p2,p3은 구조체 변수들이다. 구조체 변수도 변수라서 구조체 변수의 이름으로 메모리 공간이 생성되고 구조체 변수의 이름
// 앞에서 & 연산자를 붙이면 구조체 변수의 시작 주소 &p1, &p2, &p3를 알 수 있다.
// 
// 
// 
// 두 번째 변수는 구조체 정의와 구조체 변수 선언을 따로 하는 방법이다. 이 방법에서는 구조체를 정의한 후에 main() 함수에서
// 구조체 변수를 선언한다. 이때 struct 키워드를 꼭 적어야 한다.
// 
// 
// 
// int main(){
// 
// struct point p1,p2,p3;
// return 0;
// }
// 
// 
// 
// 
// 
// 3행부터 7행까지 group이라는 이름으로 구조체를 정의한다. 11행에서 구조체 변수 g1을 선언한다.
// 13, 14행에서 구조체 변수 g1으로 멤버 변수 a와 b에 접근해서 데이터를 저장한다.
//