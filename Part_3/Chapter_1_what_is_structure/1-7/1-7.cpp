#include <stdio.h>

struct score {
	
	double math;
	double english;
	double total;
};

struct student
{
	int no;
	struct score s;		// 구조체 변수 s를 구조체 student의 멤버 변수로 사용 (중첩 구조체)
};

int main(void) {

	struct student stu;

	stu.no = 20101323;
	stu.s.math = 90;
	stu.s.english = 80;
	stu.s.total = stu.s.math + stu.s.english;

	printf("학번 : %d \n", stu.no);
	printf("총점 : %lf \n", stu.s.total);

	return 0;
}


//
// 
// 중첩 구조체는 구조체 내에 구조체가 포함되어 있다는 의미이다. 즉, 멤버 변수로 구조체 변수를 사용하게
// 된다.
// 
// 
// 3행부터 8행까지에서 score 라는 이름의 구조체를 정의한다. 10행부터 14행까지에서 student라는 이름의 구조체를
// 정의한다.
// 
// 10행부터 14행까지에서 student라는 이름의 구조체를 정의한다. 그런데 구조체 student의 멤버 변수로 'struct score s' 즉,
// 구조체 변수 s가 포함되어 있다.
// 
// 18행에서 구조체 student의 멤버 변수에 접근할 수 있는 구조체 변수 stu를 선언한다.
// 
// 20행에서 구조체 변수 stu를 통해 구조체 student의 멤버 변수 no에 데이터를 접근한다.(stu.no)
// 
// 
// 21행에서 구조체 변수 stu를 구조체 student의 멤버 변수 s에 접근하고, 멤버변수 s는 구조체 score의 멤버 변수에
// 접근할 수 있는 구조체 변수도 되기 때문에 구조체 score의 멤버 변수 math, english, total에 접근할 수 있다.
// 
// 
// 이와 같이 . 연산자 두 개를 이용해서 중첩 구조체에 접근하는 것이 가능하다.
//
