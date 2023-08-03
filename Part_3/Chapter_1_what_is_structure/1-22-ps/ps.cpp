#include <stdio.h>
struct test1 {
	int x;
	char y;
	char xy;
	int xx;
};

struct test2 {
	char a;
	int b;
};

struct test3 {
	int a;
	int b;
};

int main(void) {
	
	printf("%d %d %d \n", sizeof(struct test1), sizeof(struct test2), sizeof(struct test3));

	return 0;
}
// 결과:
// 8 8 8
// 
// sizeof 연산자로 구조체의 크기를 구하면 결과는 8바이트이다. 이유는 메모리 정렬 때문이다.
// 4바이트 단위로 메모리 공간을 정렬하는 컴파일러가 있다고 할 때, 컴퍼일러는 메모리 공간에 구조체를 4
// 바이트 단위로 메모리 정렬을 하기 때문에 구조체의 크기는 구조체의 멤버 변수들의 크기의 합보다 크거나
// 같다.
// 
// 컴파일러는 구조체의 멤버 변수들 사이에 사용되지 않은 데이터 바이트를 삽입하기도 하는데 이것을
// 패딩(padding) 기법이라고 한다. 예를들어 4바이트 단위로 메모리 정령을 하는 컴파일러에서 구조체의 멤버 변수들이 다음과 같다면
// 
// char a;
// int b;
// 
// 
// char형은 1바이트이기 때문에 컴파일러가 메모리 정렬을 하면 3바이트를 삽입한다. 따라서 패딩 때문에 구조체의 크기가 멤버 변수들의 크기의 합
// 보다 큰 경우가 발생한다.
// 
// 
// 
//