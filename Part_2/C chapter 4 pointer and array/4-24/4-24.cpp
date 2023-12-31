#include <stdio.h>
int main(void) {

	char array[] = "ABCD";

	// 문자 출력
	printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);
	printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);

	// 문자열 크기 출력
	printf("%d \n", sizeof(array));

	return 0;
}


//
// 4.2.2 문자열과 널 문자
// 
// C언어ㅔ서 문자열이란 ""(큰따옴표) 내에 포함된 하나 이상의 문자를 의미하며, 문자열의
// 맨 끝에는 문자열의 끝을 알리는 종료 문자, 즉 '\0'이 삽입되어 있다. 이와 같은 종료 문자를
// 우리는 널(NULL) 문자라고 한다.
// 
// 문자열은 문자들이 메모리 공간에 연속적으로 저장되어 있어서 보통 주소로 관리된다. 따라서
// 문자열의 시작 주소를 알면 저장된 문자들에 접근할 수가 있다.
// 
// 문자열은 문자열 상수와 문자열 변수로 나누어지고, 문자열 상수는 변경이 불가능한 문자열을 의미하며 문자열 변수는 변경이
// 가능한 문자열을 의미한다. 이때 이스케이프문자로 %s를 사용한다.
// 
// 
// 문자열의 특징
// 
//		* " "(큰따옴표) 내에 포함된 하나 이상의 문자
//		* 문자열의 끝에는 문자열의 끝을 알리는 종료 문자(\0)를 삽입
//		* 문자열은 주소로 관리되므로, 문자열의 시작 주소를 알면 저장된 문자들에 접근이 가능
//		* 문자열은 문자열 상수와 문자열 변수로 구분	
//		* 문자열을 출력하고 입력할 때는 서식 문자 %s를 사용
// 
// 
// 
// 
// 
// 
// 
// 문자열 상수 ABCD 또한 데이터이기 때문에 메모리 공간에 저장된다. 그러나 문자열 상수는 변수가 아니라서
// 변경할 수 없다. 만약 문자열을 변경하고 싶다면 배열에 문자열을 저장하는 문자열 배열을 만들면 된다.
// 
// 
// 
// 
// * 참고: 널(Null) 문자와 널(Null) 포인터
// 널 문자는 종료 문자 \0를 의미하며 ASCII 코드 정수 0(10진수)이고 문자열 끝에 저장이 된다. 이에 반해서
// 널 포인터는 주소로 0을 의미한다. 즉, 포인터 변수에 아무 주소도 저장하지 않는다는 의미이다.
// 널 포인터를 사용할 때는 다음과 같이 대문자를 사용해야 한다.
// 
// int *p=Null;
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 7행에선 배열에 저장된 문자들을 서식 문자 %c로 출력한다. array[4]에 저장된 널 문자도 출력하고 있지만
// 공백문자로 우리에게 보이지는 않는다. 
// 
// 8행에서 배열에 저장된 문자들을 서식 문자 %d로 출력한다. array[4]에 저장된 널 문자(종료 문자)를 10진수
// 0으로 출력한다.
// 
// 11행에서 종료 문자(\0)를 포함해서 문자열의 크기로 5를 출력한다.
// 
// 
//

