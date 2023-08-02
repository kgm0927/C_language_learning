#include <stdio.h>
void add(double num1, double num2);

int main() {
	double x = 3.1, y = 5.1;
	void (*pointer)(double, double); // 함수 포인터 선언

	printf("add 함수의 주소: %x \n", add);	// add 함수의 주소 출력
	printf("함수 포인터의 주소: %x \n",&pointer);	// 함수 포인터의 주소 출력

	pointer = add;	// 함수 포인터 pointer에 함수의 시작 주소 add를 저장
	pointer(x, y); // 함수 포인터를 이용한 호출


	return 0;
}


void add(double num1, double num2) {
	double result;
	result = num1 + num2;
	printf("%lf+%lf=%lf 입니다.", num1, num2, result);

}

//
// 
// 함수 포인터라 함수의 시작 주소로 시작되는 변수이다.
// 
// 함수의 주소를 저장하는 변수는 함수 포인터이다.
// 함수 포인터를 사용하려면 먼저 함수 포인터를 선언해야 하는데 선언하는 형식은
// 다음과 같다.
// 
// 
// 
// 
// int					(*pointer)			(int, int)
// 자료형			// 함수 포인터 이름		// 인수 자료형 목록
// 
// 
// 자료형: 가리키는 대상이 함수의 자료형을 설정
// 함수 포인터 이름: 함수 포인터의 이름을 설정하여 괄호와 *을 반드시 사용
// 인수 자료형 목록: 가리키는 대상이 되는 함수의 인수들의 자료형 목록
// 
// 
// 
// 
// 함수 포인터를 선언하는 방법은 다음 그림과 같이 먼저 가리키는 대상이 되는 함수의 출력 현태와
// 입력 형태, 매개 변수의 자료형 개수를 맞추어야 한다. 그리고 함수 포인터의 이름은 괄호로 묶어 준다.
// 이후 함수 포인터에 가리키는 대상이 되는 함수의 이름(함수의 시작 주소)을 저장하고, 함수 포인터로 함수를 호출한다.
// 
// 
// 
// 
// 2행에서 add() 함수를 선언한다. 출력 형태 void이고 입력 형태는 double형 2개 이다. 7행에서 함수 포인터를 선언한다.
// 가리키는 대상이 add() 함수의 출력 형태, 입력 형태를 맞추어서 함수 포인터를 선언한다.
// 
// 
// 12행에서 함수 포인터 pointer에 add(함수의 시작 주소)를 저장한다. 13행에서 함수 포인터 pointer를 통해 add() 함수를 간접적으로 호출한다.
// 
// 
// 참고로 함수 포인터도 포인터 변수이기 때문에 8바이트 크기의 메모리 공간을 찾는다.
//