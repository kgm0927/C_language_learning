#include <stdio.h>
int main() {
	int num = 10;
	int* ip = NULL;					// 포인터 변수 선언

	ip = &num;						// 주소 저장

	printf("%x %x %d \n", &*&ip, *&ip, **&ip);
	printf("%x %x %d \n", &ip, ip, *ip);

	return 0;
}

//
// 
// 9행과 10행은 같은 결과를 출력한다. *&에서 *와 &가 서로 상쇄되기 때문이다.
//

