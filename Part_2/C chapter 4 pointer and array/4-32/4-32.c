#include <stdio.h>
int main() {

	char* p = "Good morning";
	char* q = "C-language";
	char* array[2] = {"Good morning","C-language"};

	printf("%s \n", p);
	printf("%s \n", q);
	printf("--------------------- \n");

	printf("%s \n", array[0]);
	printf("%s \n", array[1]);
	printf("--------------------- \n");

	printf("%s \n", p + 5);
	printf("%s \n", p + 2);
	printf("--------------------- \n");

	printf("%s \n", array[0] + 5);
	printf("%s \n", array[1] + 2);

	return 0;
}
//
// 
// 4행과 5행에서 포인터 변수 p는 문자열 Good morning의 시작 주소로 저장하고, 포인터 변수 q는 문자열 C-language의 시작 주소로 저장한다.
// 
// 6행에서 포인터 배열을 선언한다. array[0]은 문자열 Good mornin의 시작으로 시작 주소를 저장하고, array[1]은 문자열 C-language의 시작 주소를 저장한다.
// 8행과 9행에서 포인터 변수 p와 q를 통해 문자열을 출력한다.
// 
//