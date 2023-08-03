#include <stdio.h>

struct student {

	char name[20];
	int money;
	struct student* link;
};

int main(void) {
	struct student stu1 = { "Kim",90,NULL };
	struct student stu2 = { "Lee",80,NULL };
	struct student stu3 = { "Goo",60,NULL };
	
	stu1.link = &stu2;
	stu2.link = &stu3;

	printf("%s %d \n", stu1.name, stu1.money);
	printf("%s %d \n", stu1.link->name, stu1.link->money);
	printf("%s %d \n", stu1.link->link->name, stu1.link->link->money);

	return 0;
}

//
// 
// 
// 자기 참조 구조체와 외부 참조 구조체
// 
// 자기 참조 구조체는 구조체 내에서 자기 자신을 참조하는 것을 의미한다.
// 
// 외부 참조 구조체의 의미는 구조체 내에서 다른 구조체를 참조하는 것이라고 추정할 수 있다.
// 
// 
// 
// ex) 자기 참조 구조체
// 
// struct student{
// 
// char name[20];
// int age;
// struct student *p;
// };
// 
// 
// ex)
// 
// struct student{
//			char name[20];
//			int age;
//			struct score* p;
// };
// 
// 
// 첫번째 구조체 student 내에서 다시 자신의 구조체 student를 참조할 수 있게
// 'struct student *p'를 선언한 자기 참조 구조체이다.
// 
// 반대로 오른쪽은 구조체 student 내에서 다른 구초체를 참조하는 'struct score *p'를
// 선언한 외부 참조 구조체이다. 크게 보면 둘 다 구조체의 멤버 변수로 구조체 포인터 변수를
// 사용하는 것이다.
// 
// 
// 
// 7행에서 자기 참조 구조체 포인터 변수 link를 선얺나다. 12행부터 14행까지에서 구조체 변수
// stu1, stu2, stu3를 선언하고 동시에 초기화한다. 특이한 점은 초기화하는 값에 NULL 포인터가
// 있다. 즉, 구조체 student의 세 번째 멤버 변수인 link에 아무 것도 저장하지 않겠다는 의미이다.
// 
// 16행과 17행에서 stu1.link에 &stu2(구조체 변수 stu2의 시작 주소)를 저장하고, stu2.link에
// &stu3(구조체 변수 stu3의 시작 주소)를 저장한다.
// 
// 
// 20행의 stu1.link=>name에서 먼저 stu1.link에는 &stu2가 저장되어 있기 때문에 stu1.link==&stu2가 성립된다.
// 그 후에 => name이 수행되어 문자열 Lee가 출력이 된다. 다음으로 stu1.link=>money에서 stu1.link에는 &stu2가
// 저장되어 있기 때문에 stu1.link==&stu2가 성립되고, 그 후에 => money가 수행되어 80이 출력된다.
// 
// 
// 21행의 stu1.link=> link=>name에서 stu1.link는 &stu2이고, =>link가 수행되어 stu1.link=>link는 &stu3이 된다.
// 마지막으로 =>name이 수행되어 문자열 Goo가 출력된다.
//