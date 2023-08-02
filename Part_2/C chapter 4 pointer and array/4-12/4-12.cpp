#include <stdio.h>	//	*(array+i)==array[i]==*&array[i] 서로 같다.
int main()
{
int array[3][3] = { 10,20,30,40,50,60,70,80,90 };

printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);
printf("%x %x %x \n", &array[2][0], &array[2][1], &array[2][2]);
printf("----------------------- \n");

printf("%d %d %d \n", *&array[0][0], *&array[0][1], *&array[0][2]);
printf("%d %d %d \n", *&array[1][0], *&array[1][1], *&array[1][2]);
printf("%d %d %d \n", *&array[2][0], *&array[2][1], *&array[2][2]);
printf("----------------------- \n");

printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
printf("%d %d %d \n", array[2][0], array[2][1], array[2][2]);

return 0;
}


//
// 포인터와 2차원 배열
// 
// 2차원 배열에서 *(array+1)==*&array[i]==array[i]는 주소를 표현한다.
// 
// 
// * 1차원 배열일 때 *(array+i)==array[i]==*&array[i]는 값
// * 2차원 배열일 때 *(array+i)==array[i]==*&array[i]는 주소
// 
// 
// 
// 
// 6행부터 9행까지 & 연산자를 이용하여 2차원 배열의 요소들의 주소를 출력한다.
// 2차원 배열 array는 int형이므로 각 열은 4바이트만큼 차이가 난다.
// 
// 11행부터 14행까지에서 * 연산자를 이용하여 2차원 배열에 저장된 값들을 출력한다.
// 
// 16행부터 18행까지에서 *&는 서로 상쇄되기 때문에 11행부터 14행까지의 결과와
// 같이 출력된다.
// 
//