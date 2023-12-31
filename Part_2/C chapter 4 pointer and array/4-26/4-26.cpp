#include <stdio.h>
int main(void) {

	char array[] = "ABCD";

	// 문자열 출력
	printf(" %s \n", array);
	printf(" %s \n", array + 1);
	printf(" %s \n", array + 2);
	printf("%s \n", array + 3);
	printf("%s \n", array + 4);

	return 0;
}

//
//
// 서식 문자 %s는 문자열의 시작주소를 입력받아서 종료문자까지 문자열을 출력해준다.
// 
// 7행에서 서식문자 %s는 문자열의 시작 주소를 입력받아서 종료 문자를 만날 때가지 문자열을 출력한다.
// 배열의 시작 주소 array를 입력받아 해당 주소에 저장된 문자 A부터 종료 문자를 만날 때까지 문자열을 입력한다.
// 그래서 ABCD가 출력이 된다.
// 
// 8행에서 배열의 주소 array+1를 입력받아 해당 주소에 저장된 문자 B부터 종료 문자를 만날 때까지 문자열을 출력한다.
// 따라서 문자열 BCD가 출력이 된다.
// 
// 9행에서 배열의 주소 array+2를 입력받아 해당 주소에 저장된 문자 C부터 종료 문자를 만날 때까지 문자열을 출력한다.
// 따라서 문자열 CD가 출력된다.
// 
// 10행에서 배열의 주소 array+3을 입력받아 해당 주소에 저자오딘 문자 D부터 종료문자를 만날때까지 문자열을 출력한다.
// 따라서 문자 D가 출력된다.
// 
// 
// 다른 문자에 비해 주소의 개념이 강하게 부여되고 있다. 하지만 서식 문자 %s를 잘 활용하면 문자열을 처리하기 쉽다.
//