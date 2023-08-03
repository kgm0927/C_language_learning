#include <stdio.h>

int main(int argc, char* argv[]) {

	int i = 0;
	if (argc < 4) {
		printf("문자열의 수가 너무 많습니다. \n");
		printf("프로그램을 종료합니다. \n");
		return 1;
	}

	printf("0번째 문자열 : %s \n", argv[0]);
	printf("1번째 문자열 : %s \n", argv[1]);
	printf("2번째 문자열 : %s \n", argv[2]);
	printf("3번째 문자열 : %s \n", argv[3]);

	return 0;
}

//
// 
// 6행에서 문자열의 수가 4를 초과하면 실행되는 조건문이다. 
// 
// 10행은 운영체제가 main()함수를 호출했기 때문에 C 프로그램이 운영체제에게 1을 반환하고 프로그램을 종료한다는 의미이다.
// 
// 
//