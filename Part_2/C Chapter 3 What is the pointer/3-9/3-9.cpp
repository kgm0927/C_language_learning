#include <stdio.h>
int main() {

	int num1 = 10;
	int* ip1 = NULL;		// 1차원 포인터 변수 선언
	int** ip2 = NULL;		// 2차원 포인터 변수 선언
	int*** ip3 = NULL;		// 3차원 포인터 변수 선언

	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;

	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);		// 모두 10 출력
	printf("%x %x %x %x \n", &num1, ip1, *ip2, **ip3);			// 모두 num1의 주소 (&num1)출력
	printf("%x %x %x  \n", &ip1, ip2, *ip3);					// 모두 ip1의 주소(&ip1) 출력
	printf("%x %x \n", &ip2, ip3);								// 모두 ip2의 주소(&ip2) 출력

	printf("%d %d \n", sizeof(int), sizeof(int*));
	printf("%d %d \n", sizeof(int**), sizeof(int***));
	
	printf("%d %d \n", sizeof(num1), sizeof(ip1));
	printf("%d %d \n", sizeof(ip2), sizeof(ip3));				// 모두 8바이트 크기 출력

	return 0;

}

//
// 
//		ip3을 기준으로 메모리 공간을 한 번 간접 접근하면 어떤 값을 참조할 수 있는가?
//		ip2의 메모리 공간 즉, &ip1을 참조할 수 있다. 따라서 *ip3==ip2==&ip1과 같다.
// 
//		ip3을 기준으로 메모리 공간을 두 번 간접 접근하면 어떤 값을 참조할 수 있는가?
//		ip1의 메모리 공간 즉, &num1을 참조할 수 있다. 따라서 **ip3==ip1==&num1과 같다.
// 
//		ip3을 기준으로 메모리 공간을 세 번 간접 접근하면 어떤 값을 참조할 수 있는가?
//		num1의 메모리 공간 즉, 10을 참조할 수 있다. 따라서 ***ip3==num1==10과 같다.
// 
//		ip2와 ip1을 기준으로 메모리 공간을 몇접 간접 접근해야 값을 참조할 수 있을까?
//	
// 
// 
// 최종적으로 다음과 같은 표현들을 도출해 낼 수 있다.
// 
//		ip3==&ip2;
//		*ip3==ip2==&ip1;
//		**ip3==*ip2==ip1==&num1
//		***ip3==**ip2==num1==10
// 
// 18행부터 22행까지 sizeof 연산자로 결과를 확이하면 모두 크기가 4바이트임을 알 수 있다. (64비트 환경에서는 8바이트이다.)
//