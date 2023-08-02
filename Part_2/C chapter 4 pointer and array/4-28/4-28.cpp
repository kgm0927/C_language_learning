#include <stdio.h>
int main(void) {

	char array[] = "ABCD";
	
	array[0] = 'X';
	printf("%s \n", array);

	return 0;
}
//
// 4행에서 배열에 문자열 ABCD를 저장한다. 6행에서 배열의 첫 번째 요소의 값을 문자 X로 변경한다.
// 7행에서 서식 문자 %s로 문자열을 출력한다. 출력 결과는 문자열 XBCD이다.
// 배열에 젖아된 문자열 데이터가 변경되었다.
//