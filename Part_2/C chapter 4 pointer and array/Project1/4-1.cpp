#include <iostream>
int main() 
{
	int array[3] = { 10,20,30 };

	printf("%x %x %x \n", array, array + 0, &array[0]);
	printf("%x %x \n", array + 1, &array[1]);
	printf("%x %x \n", array + 2, &array[2]);

	printf("%d %d %d \n", sizeof(array), sizeof(array + 0), sizeof(&array[0]));
							// 12			// 4				// 4
	return 0;
}

//
//
// 
// 배열 이름은 배열 시작 주소이다.
// 
// 배열의 이름은 배열 요소에 접근하기 위해 꼭 필요하다. 
// 
// 6행에서 배열 이름 array, array+0, &array[0]을 출력한다. 0번의 요소의 주소,
// 즉 같은 주소를 가리키고 있다.
// 
// 7행과 8행에서 array+1, &array[0] 그리고 array+2, &array[2]를 출력한다.
// 
// 
// 10 행에서 array,array+0, &array[0]의 크기를 출력합니다. 특이한 점은 배열 이름인 array의 크기는
// 같은 주소를 가리키고 있지만 크기가 다르다. 이유는 array+0의 의미는 0번 요소의 주소(4바이트 메모리 공간의
// 주소)를 의미하고 array는 배열의 시작 주소(12바이트 메모리 공간의 주소)를 의미하기 때문이다.
//