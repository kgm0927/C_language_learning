#include <stdio.h>

struct score
{
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;	// 구조체 변수 s를 구조체 student의 멤버 변수로 사용 (중첩 구조체)
};

int main(void) {

	struct student stu = { 20101323,{90,80,0} };
	// struct student stu={20101323,{90,80,0}};
	stu.s.total = stu.s.math + stu.s.english;
	printf("학번 : %d \n", stu.no);
	printf("총점 : %d \n", stu.s.total);

	return 0;
}

//
// 
// 18행에서 구조체 변수 stu를 선언하고 동시에 초기화한다. {90,80,0}이 중괄호에 쌓여 있는데,
// 90은 stu.s.math에 저장되고, 80은 stu.s.english에 저장되며, 0은 stu.s.total에 저장된다.
// 
// 19행은 주소거 부분은 18행과 같은 결과를 출력한다. 둘의 차이는 중괄호가 있느나 없는냐 이다.
// 이렇게 19행처럼 중괄호를 생략해도 데이터는 순서대로 저장된다.
//
