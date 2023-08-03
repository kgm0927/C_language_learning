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
int i = 0;
	struct student stu[3]=
	{ {"20101323","Park",80,80,0},
	{"20101324","kim",95,85,0},
		{"20101325","Lee",100,90,0}
	};

	for ( i = 0; i < 3; i++)
	{
		stu[i].total = stu[i].math + stu[i].english;
		printf("학번 : %s, 이름: %s \n", stu[i].no, stu[i].name);
		printf("총점 : %lf \n", stu[i].total);
		printf("\n");
	}

	return 0;
}

//
// 15행부터 19행까지에서 구조체 변수로 배열을 선언하고 동시에 초기화한다. 배열요소는 0부터 시작하기 때문에
// stu[0], stu[1], stu[2]가 생성된다. 
// 
// 21행부터 27행까지의 반복문을 사용하여 배열 요소에 저장된 개별 데이터를 출력한다.
//