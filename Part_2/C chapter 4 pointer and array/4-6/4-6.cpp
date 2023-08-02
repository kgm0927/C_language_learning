#include <stdio.h>
int main(void) {

	int array[3] = { 10,20,30 };
	int i = 0;
	int* p = NULL;		// p=&array[0]; 와 같다.

	p = array;	// p=&array[0]; 포인터 변수에 배열의 시작 주소를 저장

	for ( i = 0; i < 3; i++)
	{
		printf("%d %d %d \n", *(p + i), *&p[i], p[i]);// 결론: *(p+i)==*&p[i]==p[i];
	}

	printf("------------------------------\n\n");
	for (i = 0; i < 3; i++) {
		printf("%d %d %d \n", *(array + i), *&array[i], array[i]);	// 결론: *(array+i)==*&array[i]==arraay[i]
	}

	return 0;
}

//
// 8행에서 포인터 변수 p에 배열의 시작 주소 array를 저장한다. 따라서 포인터 변수 p는 지금부터 배열의 주소를 저장하고 있어서 배열처럼 사용할 수 있다.
// 
// 10행에서 13행까지의 배열에 저장된 값들을 출력한다. 특이한 점은 배열에 저장된 값을 출력할 때 포인터 변수를 이용해서 다양하게 표현이 가능하다는 점이다.
// p에서 array를 저장했기 때문에 *(p+i)==*&p[i]==p[i]이 성립이 된다. 16행부터 19행까지 에서 배열에 저장된 값들을 출력한다. *(array+i)==*&array[i]==array[i]
// 이 있다.
// 
//