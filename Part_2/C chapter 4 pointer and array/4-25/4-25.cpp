#include <stdio.h>
int main(void) {

	char array[] = { 'A','B','C','D','\0' };// 문자열 배열 선언

	// 문자 출력
	printf("%c %c %c %c %c \n", array[0], array[1], array[2], array[3], array[4]);
	printf("%d %d %d %d %d \n", array[0], array[1], array[2], array[3], array[4]);

	return 0;
}

//
// 다음 예제는 중괄호와 작은따옴표를 이용하여 문자열을 배열에 저장하는 방법들을 보여주고
// 있다.
// 
// 
// 4행에서 작은따옴표를 이용하여 배열에 문자열을 저장한다. 맨끝에 널 문자를 삽입했기 때문에
// 배열에 저장된 데이터들은 문자열로 인식된다.
//
