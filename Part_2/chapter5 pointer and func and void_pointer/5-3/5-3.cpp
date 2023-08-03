#include <stdio.h>

void func(int* p, int num);

int main(void) {
	
	int array[] = { 10,20,30,40,50,60,70,80,90 };
	func(array, sizeof(array) / sizeof(int));
	return 0;
}

void func(int* p, int num) {
	
	int i;
	for ( i = 0; i < num; i++)
	{
		printf("%d %d \n",p[i],*(p+i));
	}
}


//
// 
// 3행에서 출력 형태가 void, 두 개의 변수(포인터 변수 p와 int형 변수 num)를 입력 형태로 하는
// 01 형태의 함수를 선언한다.
// 
// 7행에서 배열을 선언하고 동시에 초기화한다.
// 
// 8행에서 배열 이름 array와  sizeof(array) / sizeof(int)를 통해 12행의 func() 함수를 호출한다.
// 함수의 두 번재 인자  sizeof(array) / sizeof(int)에서 sizeof(array)는 32바이트, sizeof(int)는
// 4바이트 따라서 32/4 즉, 8이 전달되는 인자의 값이 된다.
// 
// 
// 
// 12행에서 포인터 변수 p와 int형 변수 num이 생성이 된다. 포인터 변수 p에는 배열의 시작 주소를 저장하고,
// 변수 num에는 8(상수)을 저장한다. 이 함수에서는 주소에 의한 호출과 값에 의한 호출이 함께 쓰이고 있다.
// 
// 
// 15행부터 18행까지에서 i<num일 때까지 즉, i가 8보다 작은 0,1,2,3,4,5,6,7인 경우에 반복문을 수행한다.
// 포인터 변수 p는 배열의 시작 주소를 저장하고 있어서 p[i]를 통해 1차원 배열 요소들에 값에 모두 접근할 수 있다.
// 또한, *(p+i)를 통해서도 1차원 배열 요소들이 값에 모두 접근할 수 있다.
// 
// 
//