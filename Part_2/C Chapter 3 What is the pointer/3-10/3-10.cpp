#include <stdio.h>
int main() {

	int num1 = 10;
	int* ip1 = NULL;
	int** ip2 = NULL;
	int*** ip3 = NULL;


	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

	*ip1 = 20;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

	**ip2 = 30;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);


	***ip3 = 40;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);
	
	return 0;
}

//
// 
// 15행에서 메모리 공간 ip1을 기준으로 * 연산자를 한 개 사용해서 변수 num1의 값을 20으로
// 변경한다.
// 
// 18행에서 메모리 공간 ip2를 기준으로 * 연산자를 두 개 사용해엇 변수 num1의 값을 30으로 변경한다.
// 
// 21행에서 메모리 공간 ip3을 기준으로 * 연산자 세 개를 사용해서 변수 num1의 값을 40으로 변경한다.
//