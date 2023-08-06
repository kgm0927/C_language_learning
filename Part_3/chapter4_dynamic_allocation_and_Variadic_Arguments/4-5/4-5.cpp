#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* p1 = (int*)calloc(1, sizeof(int));
	int* p2 = (int*)malloc(4);

	printf("p1 값 : %d \n", *p1);
	printf("p2 값 : %d \n", *p2);

	free(p1);
	p1 = NULL;

	free(p2);
	p2 = NULL;

	return 0;
}

//
// 5행과 6행에서 p1은 calloc() 함수를 통해 반환된 주소를 저장하고 있고, p2는 malloc()
// 함수를 통해 반호나된 주소를 저장하고 있다. 8행과 9행에서 p1은 calloc() 함수를 사용하기
// 때문에 동적 메모리로 할당된 영역으로 자동적으로 0으로 초기화한다.
// 
// 
// 그러나 p2는 malloc() 함수를 이용했기 때문에 동적 메모리로 할당된 영역을 초기화하지 않았다.
// 따라서 *p1은 자동적으로 0이 초기화되어 0이 출력되고 , *p2는 별도로 초기화를 해야 하기 때문에
// 쓰레기 값이 출력된다.
// 
//
