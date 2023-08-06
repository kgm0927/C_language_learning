#include <stdio.h>
#include <stdlib.h>
int main(void) {

	int i = 0;
	int* p = (int*)calloc(sizeof(int), sizeof(int));

	if (p == NULL)
		printf("힙 영역에 동적 메모리 할당 실패 \n");

	for ( i = 0; i < 4; i++)
	{
		p[i] = i;
		printf("주소 : %x \n", &p[i]);
		printf("값 : %d \n", p[i]);
	}

	free(p);
	p = NULL;

	return 0;
}

//
// 
// 6행에서 calloc() 함수를 이용하여 동적 메모리를 할당한다. calloc() 함수의 인자를 보면 sizeof(int)가 두개
// 있다. sizeof(int)는 4 이므로 6행은 (int*)calloc(4,4)와 같이 된다. 이것의 의미는 4*4 즉, 16바이트 동적 메모리를 힙 영역에
// 할당하라는 의미이다. 
//


//
// 
// calloc() 함수와 free() 함수
// 
// calloc() 함수는 malloc() 함수와 같은 기능을 한다. 즉, 힙 영역에 
// 동적 메모리를 할당하는 것이 가능하며, 사용하는 방법만 약간 다르다.
// 
// 
// 
// #include <stdlib.h>
// void* calloc(size_t num,size_t size);
// void free(void* p);
// 
// 
// 
// 자세히보면 이 이 두 함수 사이에 차이가 있다. calloc() 함수의 입력 인자는 두 개,
// malloc() 함수의 입력 인자는 한 개이다. calloc() 함수는 num*size 만큼의 크기를 할당한다.
// 
// 
// int* p1=calloc(4,4); 함수의 입력 인자 2개
// int* p2=malloc(16); 함수의 입력 인자 1개
// 
//