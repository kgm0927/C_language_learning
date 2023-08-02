#include <stdio.h>

int main() {
	int num1 = 3;
	char num2 = 'A';

	printf("주소 :%x, 값:%d 값:%d\n", &num1, num1, *&num1);
	printf("주소 :%x, 값:%d 값:%d\n",&num2,num2,*&num2 );


	printf("%d %d \n", sizeof(int), sizeof(char));
	printf("%d %d \n", sizeof(num1), sizeof(num2));

	return 0;
}
// 제 3장 포인터란 무엇인가.
// 
// 3.1 포인터란
// 
// 포인터 변수를 배우면서 & 연산자와 * 연산자를 많이 사용하게 된다. Part 2의
// 1,2 장에서 이들 연산자를 배운다. &연산자를 통해 주소를 알 수 있었고, * 연산자를 통해
// 저장된 값을 참조할 수 있다.
// 
// 
// 
// 
//		포인터 변수라 주소를 저장하는 변수이다.
// 
// 포인터는 주소를 저장하는 변수이다. 기존의 변수는 데이터를 저장하는데 반하여 포인터는
// 메모리 공간의 주소를 저장한다. 포인터 변수가 주소를 저장하려면 변수의 주소를 알아야 하는데 변수 이름 앞에
// & 연산자를 붙이면 해당 변수의 시작 주소를 반환한다.
// 
// 더 나아가 포인터 변수가 저장하는 변수의 주소에 저장된 값을 참조하려면 * 연산자를 사용한다.
// 
// 
// 4행부터 5행까지는 변수 num1(4byte)에 3을 저장하고, 변수 num2(1byte)에
// 문자 A를 저장한다.
// 
// 
// 7행 : &num1(변수 num1의 주소), num1, *&num1(&num1에 저장된 값 참조,3)
// 8행 : &num2(변수 num2의 주소), num2, *&num2(&num2에 저장된 값 참조,'A')
// 
// 
// 
// 
// 
// 3.2 포인터 변수의 선언과 사용
// 
// 
// 본격적으로 포인터 변수를 선언해서 사용하는 방법을 공부해 보자.
// 
// 
//			포인터 변수의 선언
// 
// 포인터 변수도 변수이므로 사용하려면 먼저 선언해야 한다. 포인터 변수의 선언은
// 자료형 다음에 * 연산자를 붙이고 포인터 변수의 이름을 쓴다.
// 
// int*			point						=NULL;
//	자료형		// 포인터 변수이름			// NULL 포인터 설정
// 
// 
// * 자료형: 포인터 변수의 자료형을 지정, 자료형 다음에 *연산자를 붙임
// * 포인터 변수 이름: 주소를 저장할 변수의 이름을 지정
// * NULL 포인터 설정: 포인터 변수 선언 시 NULL 초기화
// 
// 참고적으로 NULL 포인터는 포인터  변수에 아무 주소도 저장하지 않겠다는 의미이다.
// 
// 포인터 변수는 주소를 저장하는변수로 일반 변수와 마찬가지로 먼저 포인터 변수를 선언해야 한다.
// 
// 
// 일반 변수의 선언과 달리 포인터 변수는 자료형 뒤에 *을 붙이며, NULL 포인터로 초기화해야 한다.
//


