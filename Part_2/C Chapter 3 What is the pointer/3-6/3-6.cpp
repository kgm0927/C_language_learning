#include <stdio.h>
int main() {
	int num1 = 10;
	int num2 = 0;
	int* ip = NULL;	// 포인터 변수 선언

	ip = &num1;		// 주소 저장

	num2 = *ip + num1;
	//값+num1;

	printf("%d %d %d \n", *ip, num1, num2);


	return 0;

}
//
// 
// 8행에서 포인터 변수 *ip에 &num1(변수 num1의 주소)을 저장한다.
// 
// 
// 10행에서 변수 num2에 *ip+num1의 결과를 저장한다. ip는 &num1을 저장하고 있으므로 
// *ip==&num1과 같다. *&num1에서 *와 &을 서로 상쇄하면 결국 num1만이 남는다. 
// 즉 num1, *&num1, *ip는 같은 메모리 공간이다.
// 
// 
// 포인터 변수는 변수의 주소를 참조하여 메모리 공간에 간접 접근할 수 있어서 C언어에서 사용 빈도가 매우 높다.
//
