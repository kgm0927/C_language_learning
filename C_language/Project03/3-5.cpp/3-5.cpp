#include <stdio.h>
int main() {
	int num = 10;
	int* ip = &num;

	printf("%x %x %d \n", &*&ip, *&ip, **&ip);
	printf("%x %x %d \n", &ip, ip, *ip);

	return 0;
}