#include<stdio.h>

int main(int argc, char* argv[]) {


	int i = 0;
	printf("문자열 수: %d \n", argc);

	for ( i = 0; i < argc; i++)
	{
		printf("argc[%d] : %s \n", i, argv[i]);
	}
}


//
// 도대체 어떻게 출력이 되는 것일까? 해답은 main() 함수의 인자들인 int argc와 char* argv[]의 역할에 있다.
// 
// 
//		int argc 문자열의 수를 저장
//		char* argv[] 문자열의 첫 번째 주소를 저장
// 
// 
// 
// 
// 위의 예제를 실행하기 전에 솏ㅇ에서 나온 창에 구성속성-> 디버깅-> 명령인수 에 'Good morning C Language'를 입력한다.
// 
// 
// 결과:
// 문자열 수: 5
// argc[0] : C:\Users\kgm09\source\repos\chapter5 pointer and func and void_pointer\x64\Debug\5 - 12.exe
// argc[1] : Good
// argc[2] : Morning
// argc[3] : C
// argc[4] : Language
// 
// 
// 3행에서 앞의 설정 화면에서처럼 하면 문자열의 수가 실행 경로를 초함하여 총 5개이므로 argc=5로 설정되고,
// 문자열의 주소를 저장하는 포인터 배열에서 char* argv[5]로 설정된다.
// 포인터 뱅려 argv[0], argv[1], argv[2], argv[3], argv[4] 각각은 문자열 배열의 시작 주소를 저장한다.
// 
// 
// 6행에서 변수 argc에 저장된 값을 출력한다. 10행에서 포인터 배열 argv[0], argv[1], argv[2],argv[3],argv[4]에 저장된
// 주소들에 있는 문자열을 서식 문자 %s를 이용해서 종료한다.  
// 
// 10행에서 포인터 배열 argv[0], argv[1], argv[2], argv[3], argv[4]에 저장된 주소들에 있는 문자열을 서식 문자 %s를 이용해서
// 종료 문자(\0)를 만날때까지 출력한다.
//