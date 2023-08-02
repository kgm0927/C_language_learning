#include<stdio.h>
void add(int num1, int num2);
void substract(int num1, int num2);

int main() {
	
	int x, z;
	char c;
	void (*pointer)(int, int);

	printf("add 함수의 주소 : %x \n", add);
	printf("substract 함수의 주소 : %x \n", substract);
	printf("입력 : ");

	scanf("%d %c %d", &x, &c, &z);

	if (c == '+')
		pointer = add;

	else if (c == '-')
		pointer = substract;

	else
		printf("두 번째 연산자는 '+'또는 '-'를 입력하세요. \n");

	pointer(x, z);

	return 0;

}

void add(int num1, int num2) {
	int result;
	result = num1 + num2;
	printf("%d+ %d = %d 입니다.", num1, num2, result);
}

void substract(int num1, int num2) {
	int result;
	result = num1 - num2;
	printf("%d- %d = %d 입니다.", num1, num2, result);
}

//
// 
// 9행에서 함수 포인터 pointer를 선언한다. 출력 형태는 void이고 입력 형태는 int형 2개이다.
// 17행부터 21행까지에서 만약 키보드로부터 받은 문자를 저장한 변수 c가 '+'라면 함수 포인터
// pointer에 add를 저장하고 '-'라면 함수 포인터 pointer에 substract를 저장한다.
// 
// 
// 26행에선 함수 포인터 pointer를 통해 함수 호출을 간접적으로 수행하고 있다.
// 
// 
//

