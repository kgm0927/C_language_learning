#include <stdio.h>
int main() {
	
	char c = 'A';
	char* cp = NULL;
	char** cpp = NULL;

	cp = &c;
	cpp = &cp;

	printf("%x %x %x \n", &c, &cp, &cpp);
	printf("%x %x %x \n", &c + 1, &cp + 1, &cpp + 1);

	printf("%c %x %x \n", c, cp, cpp);
	printf("%c %x %x \n", c + 1, cp + 1, cpp + 1);

	return 0;


}

//
// 
// 3.4 주소의 가감산
// 
// 
// C언어에서 배우는 자료형은 모두 주소를 가지며 주소의 가감산이 가능하다.
// 
// 예를 들어 char형 주소에 +1를 하면 1바이트 증가하고, int형 주소에 +1를 하면 4바이트 증가하며, double형 주소에 +1을
// 하면 8바이트가 증가한다.
// 
// 
// 11행에서 각 변수의 주소 &c, &cp, &cpp를 출력한다. 12행에서 각 변수의 주소에 1을 더해서 &c+1,&cp+1,&cpp+1을 출력한다.
// 
// &c+1은 char형 (1Byte)만큼 증가하겠다는 의미로 1 증가하고, &cp+1은 1차원 포인터(8Byte)만큼 증가하겠다는 으로 1 증가한다.
// 
// 마지막으로 &cpp+1은 2차원 포인터형(4Byte)만큼 증가하겠다는 의미로 1 증가한다.
// 
// 
// 
// 14행에서 각 변수에 저장된 값 c, cp, cpp를 출력한다. 15행에서 각 변수에 저장된 값에 +1을 더해서 c+1, cp+1, cpp+1을 출력한다.
// 
// 
// 
// 
//		c+1의 경우 c에 문자 A가 저장되어 있어서 저장된 값에 1을 더하여 문자 B를 출력한다.
//		
//		cp+1의 경우 cp에 &c가 저장되어 있어서 &c+1과 같은 표현이 되어 &c에 char형(1Byte)만큼 증가하여 주소를 출력한다.
// 
// 
//		cpp+1의 경우 cpp에 &cp가 저장되어 있어서 &cp+1과 같은 표현이 되어 &cp에 1차원 포인터형(4Byte)만큼 증가하여 주소를 출력한다.
//