#include <stdio.h>
#include<stdlib.h>
int main(void) {

	int i = 0;
	int* p = (int*)malloc(sizeof(int) * 2);	// 8바이트 동적 메모리 할당
	p[0] = 10;
	p[1] = 20;

	p = (int*)realloc(p, sizeof(int) * 4);	// 16바이트 재할당 (이전보다 8Byte만큼 확장됨)
	p[2] = 30;
	p[3] = 40;


	for ( i = 0; i < 4; i++)
	{
		printf("p[%d] : %d \n", i, p[i]);
	}

	free(p);
	p = NULL;

	return 0;
}
//
// 
// 7행에서 malloc() 함수를 이용하여 힙 영역에 8바이트 동적 메모리를 할당한다. 8행, 9행이 p[0]에
// 10을 저장하고 p[1]에 20을 저장해서 8바이트 동적 메모리에 데이터를 저장한다.
// 
// 11행에서는 realloc() 함수를 이용하여 기존의 8바이트를 16바이트로 재할당한다.
// 
// 
// 12, 13행에서 기존의 8바이트만큼 더 확장하였으므로 이전의 데이터들은 남아 있다. 그리고 p[2]=30,
// p[3]=40이 저장된다.
// 
// 
// realloc() 함수 free() 함수
// 
// malloc() 함수와 calloc() 함수는 동적 메모리를 할당한 후에 메모리의 크기를
// 변경하지 못한다는 단점이 있다. 이러한 문제를 realloc() 함수가 해결해 준다.
// realloc() 함수는 동적 메모리로 할당되어 있는 영역에서 size만큼 재할당해 준다.
// 
// 그런 다음 재할당된 메모리의 시작 주소를 반환한다. 
// 
// 
// #include <stdio.h>
// #include <stdlib.h>
// 
// void* realloc(void* p, size_t size);	// 동적 메모리 재할당 함수
// void free(void*p);					// 동적 메모리 해제 함수
// 
// 
// realloc() 함수에서 첫 번째 인자 void*형 p는 이미 할당되어 있는 동적 메모리의 시작 주소를
// 저장하고 있다. 두 번째 함수 인자 size는 재할당할 크기이다. 즉, realloc() 함수의 의미는
// p가 참조하고 있는 동적 메모리 크기를 size만큼 재할당하라는 의미이다.
// 
// 
//