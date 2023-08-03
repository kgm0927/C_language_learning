#include <stdio.h>

struct student {
	
	char no[10];
	char name[20];
	double total;
};


int main(void) {
	
	struct student stu={"20101323","Park",160};
	struct student* p = NULL;
	struct student** pp = NULL;

	p = &stu;
	pp = &p;


	printf("%s %s %lf \n", stu.no, stu.name, stu.total);

	printf("%s %s %lf \n", (*p).no, (*p).name, (*p).total);
	printf("%s %s %lf \n", p->no, p->name, p->total);		// 1차원 포인터로 접근

	printf("%s %s %lf \n", (**pp).no, (**pp).name, (**pp).total);
	printf("%s %s %lf \n", (*pp)->no, (*pp)->name, (*pp)->total);

	return 0;

}
//
// 
// 13행과 14행에서 1차원 구조체 포인터 변수 p와 2차원 구조체 포인터 변수 pp를 선언한다. 따라서
// p는 일반 구조체의 변수 주소를 저장하는 변수이고, pp는 1차원 구조체 변수의 주소를 저장하는 변수이다.
// 
// 
// 16행에서 p에 일반 구조체 변수 stu의 주소인 &stu를 저장한다.
// 
// 17행에서 pp에는 1차원 구조체 포인터 변수 p의 구조인 &p를 저장한다.
// 
// 
// 24행에서 단순히 포인터이기 때문에 ** 연산자를 두 개 사용해야 한다는 생각을 넘어서
// 분석해 본다. pp에 &p가 저장되어 있기 때문에 (**pp).no는 (**&p).no와 같은 표현이 되고,
// *&이 상쇄되어서 (*p).no와 같은 표현이 된다.
// 
// 
// 그리고 p에 &stu가 저장되어 있기 때문에 (*p).no는 (*&stu).no와  같은 표현이 되고,
// *&이 상쇄되어서 결국 stu.no가 된다. 따라서 (**pp).no==(*p).no==stu.no가 성립된다.
// 
// 25행에서 -> 연산자를 통해 (*pp)->no를 해석해 보면 pp에는 &p가 저장되어있기 때문에 (*pp)->no는
// (*&p)->no와 같다. *&는 상쇄되어서 결국, p->no가 된다.
// 
// 
// 
// -> 연산자는 구조체 변수로 포인터가 사용되었을 때, 이 포인터로만 사용할 수 있는 연산자이다. 
//