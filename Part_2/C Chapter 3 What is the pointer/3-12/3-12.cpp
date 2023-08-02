#include <stdio.h>
int main() {
	int num = 10;
	int* ip = NULL;
	int** ipp = NULL;

	ip = &num;
	ipp = &ip;

	printf("%x %x %x \n",&num,&ip,&ipp);
	printf("%x %x %x \n", &num + 1, &ip + 1, &ipp + 1);

	printf("%d %x %x \n", num, ip, ipp);
	printf("%d %x %x \n", num + 1, ip + 1, ipp + 1);

	return 0;
}
//
// 
// 11행에서 각 변수의 주소 &num, &ip, &ipp를 출력한다.
// 
// 12행에서 각 변수의 주소에 1을 더해서 &num+1, &ip+1, &ipp+1을 출력한다.
// &num+1은 int형(4Byte)만큼 증가하겠다는 의미로 1 증가하고, &ip+1은 1차원 포인터형
// (4Byte)만큼 증가하겠다는 의미로 1 증가한다. 마지막으로 &ipp+1은 2차원 포인터형(4Byte)만큼 증가하겠다는
// 의미로 1 증가한다.
// 
// 
// 14행에서 각 변수에 저장된 값 num(10), ip(&num), ipp(&ip)를 출력한다.
// 
// 15행에서 각 변수에 저장된 값에 1을 더해서 num+1, ip+1, ipp+1을 출력한다.
// 
// 
//		num+1의 경우 변수 num에 10이 젖아되어 있어서 저장된 값에 1을 더해서 11을 출력한다.
// 
//		ip+1의 경우 ip에 &num이 저장되어 있어서 &num+1와 같은 표현이 되어 &num에 int형(4Byte)만큼 증가하여
//		주소를 출력한다.
// 
//		ipp+1의 경우 ipp에 &ip가 저장되어 있어서 &ip+1과 같은 표현이 되어 &ip에 1차원 포인터형(8Byte)만큼 증가하여
//		주소를 출력한다.
// 
//