#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct student
{
	char no[10];
	char name[20];
	double total;
};

int main(void) {
	

	struct student stu[3];
	int i = 0;

	for ( i = 0; i < 3; i++)
	{
		printf("학번 이름 총점 순으로 입력하세요 : ");
		scanf("%s %s %lf", stu[i].no, stu[i].name, &stu[i].total);
	}
	printf("\n");


	printf("학생 정보를 출력한다. \n");
	for ( i = 0; i < 3; i++)
	{
		printf("%s %s %lf \n", stu[i].no, stu[i].name, stu[i].total);
		printf("\n");
	}

	return 0;
}

//
// 
// 13행에서 구조체 배열을 선언한다. 총 세명의 정보를 저장할 수 있다.
// 
// 19행에서 세 명의 학생 정보를 입력받는다. 특이한 점은 scanf() 함수는 주소를 사용하기 때문에
// stu[i].no, stu[i].name, &stu[i].total 은 모두 주소를 나타낸다. 즉 배열의 이름은 시작 주소이기
// 때문에 '구조체 배열'.'배열 이름'의 형태는 주소를 의미한다
// 
// 26행에서 구조체 배열에 저장된 학생 정보를 출력한다. 특이한 점은 서식 문자 %s는 문자열의
// 시작 주소를 입력받아 종료 문자까지 출력하기 때문에 stu[i].no, stu[i].name은 구조체의 멤버 변수들의 시작
// 주소를 나타낸다.
//