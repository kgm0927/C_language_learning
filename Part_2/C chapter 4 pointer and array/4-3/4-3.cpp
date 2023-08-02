#include <stdio.h>

int main(void) {

	int array[3] = { 10,20,30 };

	// * 연산자 붙임

	printf("%d %d %d \n", *(array + 0), *&array[0], array[0]);	// 배열의 0번 요소에 저장한 값
	printf("%d %d %d \n", *(array + 1), *&array[1], array[1]);	// 배열의 1번 요소에 저장된 값
	printf("%d %d %d \n", *(array + 2), *&array[2], array[2]);	// 배열의 1번 요소에 저장된 값
	// 결론: *(array+i)==*&array[i]==array[i]는 값을 나태내는 표현

	return 0;

}

// 1차원 배열에서 *(array+i)==*&array[i]==array[i]은 값을 표현한다.
// 
// Part2의 1장에서 *(array+i)==*&array[i]==array[i]는 값을 나타내는 같은 표현이었다.
//