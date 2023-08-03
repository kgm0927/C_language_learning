#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double math;
	double english;
	double total;
};

int main(void) {
	struct student stu1 = { "20101323","Park",80,80,0 };
	struct student stu2 = { "20101324","Kim",95,85,0 };
	struct student stu3 = { "20101325","Lee",100,90,0 };

	stu1.total = stu1.math + stu1.english;
	printf("학번: %s, 이름: %s \n", stu1.no, stu1.name);
	printf("총점: %lf \n", stu1.total);


	printf("\n");
	stu2.total = stu2.math + stu2.english;
	printf("학번 : %s, 이름 : %s \n", stu2.no, stu2.name);
	printf("총점: %lf \n", stu2.total);

	printf("\n");
	stu3.total = stu3.math + stu3.english;
	printf("학번 : %s , 이름: %s \n", stu3.no, stu3.name);

	return 0;

}

//
// 
// 
//		1.3 구조체와 배열
// 
// 이번 절에서는 3가지를 배운다.
// 
//		* 멤버 변수로 배열 사용하기
//		* 구조체 변수로 배열 사용하기
//		* 멤버 변수로 배열을 사용할 때 주의사항
// 
// 
// 5행에서는 학번을 저장하는 10바이트 크기의 문자열 배열 char no[10]을 선언한다.
// 
// 6행에서 이름을 저장하는 20바이트 크기의 문자열 배열 char name[20]을 선언한다.
// 
// 
// 14행부터 16행가지에서 세 명의 학생 정보를 저장하려고 구조체 변수 세 개를 선언하고
// 동시에 초기화하였다. 그런데 학생 수가 많아지면 어떻게 할 것인가? 이 문제를 해결하는
// 방법은 잠시 미룬다.
// 
// 19행, 24행, 29행에서 구조체 멤버 변수로 사용하는 배열에 접근하려고, 구조체 변수와 .연산자를
// 사용한다. 그리고 문자열을 출력하기 위해 서식 문자 %s를 사용한다. 결과적으로 문자열의 시작 주소를 입력받아
// 시작 주소에 저장된 문자부터 종료 문자를 만날 때까지 출력한다.
//