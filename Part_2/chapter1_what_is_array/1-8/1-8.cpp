#include <stdio.h>
int main(void) {
	int array1[3] = { 1,2,3 };

	printf("%x %x %x %x\n",&array1,&array1[0],&array1[1],&array1[2]);
	printf("%x %x %x %x\n",*&array1,*&array1[0],*&array1[1],*&array1[2]);
	printf("%x %x %x %x\n",array1[0],array1[1],array1[2]);
	printf("%x %x %x %x\n",*&*&array1[0],*&*&array1[1],*&*&array1[2]);

	return 0;
}