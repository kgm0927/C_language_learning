#include <stdio.h>
int main() {
	int array[3] = { 10,20,30 };


	printf("%d %d %d \n", *array, *(array + 0), *&array[0]);
	printf("%d %d %d \n", *(array + 1), *&array[1]);
	printf("%d %d \n", *(array + 2), *&array[2]);

	printf("%d %d %d \n", sizeof(*array), sizeof(*(array + 0)), sizeof(*&array[0]));
							// 4			// 4				// 4
	return 0;
}

//
// 다음 예제는 앞 예제의 배열의 주소에 * 연산자를 붙인 것이다. 결과를 보면 배열 이름으로 주소를 표현하는 방법이 다양함을
// 알 수 있다.
// 
// 11 행에서 sizeof 연산자로 ahen 4(Byte)의 크기를 출력하고 있다. array,array+0,&array[0] 주소에 저장된 값을 참조하고 있어서
// 크기는 모두 4바이트이다.
//
