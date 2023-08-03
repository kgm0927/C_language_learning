#include <stdio.h>

enum week {ONE,TWO, THREE, FOUR, FIVE, SIX, SEVEN};
enum season {SPRING, SUMMER=2, FALL, WINTER};		// 열거형 정의

int main(void) {
	enum week p1, p2, p3;		// 열거형 변수
	enum season s1, s2, s3, s4;	// 열거형 변수

	p1 = ONE;
	p2 = TWO;
	p3 = THREE;

	printf("%d %d %d \n", ONE, TWO, THREE);
	printf("%d %d %d \n", p1, p2, p3);

	s1 = SPRING;
	s2 = SUMMER;
	s3 = FALL;
	s4 = WINTER;


	printf("%d %d %d %d \n", SPRING, SUMMER, FALL, WINTER);
	printf("%d %d %d %d \n", s1, s2, s3, s4);

	return 0;
}


//
// 
//			열거형
// 
// 다음과 같이 열거형을 선언하면 컴파일러는 실제로
// 열거형 멤버들을 정수형 상수로 인식한다.
// 
// 
//		enum			week			{ONE,TWO,THREE, ...}	
//	// 열거형 키워드	// 열거형 이름		// 상수 이름
// 
// 
// 열거형 키워드 : 열거형 상수를 선언하기 위해 enum 키워드를 지정
// 열거형 이름	 : 열거형을 대표하는 열거형 이름 지정
// 상수 이름	 : 열거형 데이터로 사용할 상수 이름을 지정
// 
// 
// 
// 3행과 4행은 열거형을 정의한다. 열거형 week의 중괄호 내부는 초기화 하지 않기 때문에 0부터 자동적으로 설정된다.
// 열거형 season의 중괄호 내부에서는 SUMMER를 2로 초기화했다. 이렇게 되면 FALL는 3, WINTER는 4가 된다.
// 
// 8행과 9행에서 열거형 상수들에 접근할 수 잇는 열거형 변수들을 선언한다. 11행부터 13행까지에서 열거형 변수 p1, p2, p3에
// 데이터 상수를 저장한다.
// 
// 15행과 16행에서 열거형 데이터 상수와 열거형 변수를 출력한다.
// 
// 18행부터 21행까지에서 열거형 변수 s1, s2, s3, s4에서 데이터 상수를 저장한다.
// 
// 23행과 24행에서 열거형 데이터 상수와 열거형 변수를 출력한다. 이처럼 열거형을 사용하면 변수가 상수 값에 의미를 부여할 수 있고
// 프로그램의 가독성도 좋아진다.
//