#include <stdio.h>

typedef struct score {	// 구조체에서 typedef를 사용하는 방법 1
	
	double math;
	double english;
	double average;
} SCORE;

struct student {

	int no;
	SCORE s;	// struct score s;
};

typedef struct student STUDENT;			// 구조체에서 typedef를 사용하는 방법

int main(void) {
	STUDENT stu = { 20101323,{90,80,0} };

	stu.s.average = (stu.s.math + stu.s.english) / 2;
	printf("평균: %d \n", stu.no);
	printf("평균 점수 : %lf \n", stu.s.average);

	return 0;
}
//
// 
//잠시 typedef의 사용 방법에 대해서 보여주겠다.
// 
//		typedef				int				mytype;
//		// 자료형 재정의	//자료형		// 새 이름
//			키워드			
// 
// typedef를 이용하여 기존 자료형에서 새 이름을 부여할 수 있다. 있는 구조체에서도 가능하다
// 
// 
// 3행부터 8행까지에서 구조체 정의와 동시에 typedef를 사용해서 struct score를 SCORE로
// 재정의 한다.
// 
// 따라서 13행의 'SCORE s'는 'struct score s'와 같다. 10행부터 14행가지에서 구조체 student를 정의한다.
// 
// 
// 
// 10행에서 14행까지에서 구조체 student를 정의한다.
// 
// 16행에서 typedef를 사용해서 struct student를 STUDENT로 재정의 한다. 그런데 구조체의 정의가 생략되어
// 있다. 즉, struct student에 대한 구조체 정의는 10행부터 14행까지에서 했기 때문에 생략해도 된다.
// 20행에서 'STUDENT stu'는 'struct student stu'와 같다.
// 
// 
// 정리하자면 구조체에서 typedef 를 사용할 때 3행에서 8행처럼 구조체 정의와 동시에 typedef문을 선언하는
// 방법과 10행에서 16행처럼 구조체 정의와 개별적으로 typedef문을 선언하는 방법이 있다.
// 
// 
//