#include <stdio.h>
int main(void) {

	int array[3];
	int* p = NULL;

	p = array;

	*p = 10;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("------------------------\n");

	*(p + 1) = 20;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("----------------------------\n");

	*(p + 2) = 30;
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("------------------------------ \n");


	printf("%d %d %d \n", *p, *(p + 1), *(p + 2));
	printf("%d %d %d \n", p[0], p[1], p[2]);
	printf("------------------------------- \n");

	return 0;

}
//
// 7행에서 포인터 변수 p에 배열 이름 array를 저장한다. 이후에도 p는 움직이지 않고 고정되어 있다.
// 10, 14행에서는 알 수 없는 쓰레기 값이 출력된다. 이유는 배열의 메모리 공간이 초기화되지 않아서이다.
//


// 이 예제는 포인터 변수 p를 고정한 상태에서 배열의 메모리 공간에 접근하는 방식을 나타내는 코드이다.
// 
//