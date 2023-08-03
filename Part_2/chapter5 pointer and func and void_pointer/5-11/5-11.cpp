#include <stdio.h>

int main(int argc, char* argv[]) {

	int i = 0;
	printf("문자열의 수 : %d \n", argc);

	for (i = 0; i < argc; i++) {
		printf("%d번째 문자열 : %s \n", i, argv[i]);

	}

	return 0;
}
// 결과:
// 문자열의 수 : 1
// 0번째 문자열 : C:\Users\kgm09\source\repos\chapter5 pointer and func and void_pointer\x64\Debug\5 - 11.exe
//

//
// 
// 앞에서 공부한 예제들의 main() 함수에서는 인자(입력 형태)가 없었다. 그러나 이번 절에
// 서 배우는 인자가 있는 경우이다. 다음 예제로 main() 함수에 인자가 있을 때의 차이를 알아본다.
// 
// 
// 
// 3행에서 main() 함수는 이제껏 main() 함수와는 다른 형태이다. main() 함수에 인자 int argc와 char* argv[]가 있다.
// 
// 실행결과에서 문자열의 수 1과 0번째 문자열(주소)가 자동으로 입력되어 나온다.
// 
// 
// 개발환경인 디버그-> 속성을 들어가면 그림 참이 하나 뜬다. 구성속성->디버깅 에서 명령인수에 'Good morning'을 입력하고
// 확인을 누른다.
//