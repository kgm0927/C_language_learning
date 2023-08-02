#include <stdio.h>
int main(void) {

	int array[3] = { 10,20,30 };
	int* p = NULL;

	p = array;

	printf("%d %d %d \n", array[0],array[1],array[2]);
	printf("%d %d %d \n", *(array+0),*(array+1),*(array+2));
	printf("%d %d %d \n", p[0],p[1],p[2]);
	printf("%d %d %d \n", *(p+0),*(p+1),*(p+2));


	printf("배열의 크기: %d 포인터의 크기: %d ", sizeof(array), sizeof(p));

	return 0;
}

//
// 포인터 변수와 배열의 크기 차이
// 
// 포인터 변수와 배열은 같지 않다. 모든 포인터 변수는 크기가 4바이트로 고정되어 있고, 배열은 배열의 크기에 따라 달라진다.
// 
// 
// 14행에서 sizeof(array)를 통하여 배열의 크기를 확인했을 때 12, 즉 int array[3]은 4바이트*3이므로 12 바이트가 출력이 된다.
// sizeof(p)를 통하여 포인터 변수의 크기를 확인했을 때 4, 즉 4바이트가 출력이 된다. 모든 포인터 변수는 크기가 4바이트라고 이전에 언급을 했다.
// 
// 정리하면 4바이트 크기의 포인터 변수로 12바이트 배열의 메모리 공간에 모두 접근할 수 있다.
// 
// (현재 여기서는 컴퓨터가 64bit이므로 8byte이다.)
//