#include <stdio.h>
int main(void) {

	int array[2][3] = { 10,20,30,40,50,60 };

	printf("-------------------------- #1 --------------------------");
	printf("%x %x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%x %x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);

	printf("-------------------------- #2 --------------------------");
	printf("%x %x \n", array, array + 1);
	printf("%x %x \n", array[0], array[1]);
	printf("%x %x \m", *(array + 0), *(array + 1));

	printf("-------------------------- #3 --------------------------");
	printf("%d %d %d \n", *(array[0] + 0), *(array[0] + 1), *(array[0] + 2));
	printf("%d %d %d \n", *(array[1] + 0), *(array[1] + 1), *(array[1] + 2));

	printf("-------------------------- #4 --------------------------");
	printf("%d %d %d \n", *(*(array + 0) + 0), *(*(array + 0) + 1), *(*(array + 0) + 2));
	printf("%d %d %d \n", *(*(array + 1) + 0), *(*(array + 1) + 1), *(*(array + 1) + 2));

	// array[0]== *(array+0)
	// array[1]== *(array+1)

	return 0;

}

//
// 7행부터 8행까지에서 & 연산자를 이용하여 2차원 배열의 요소들의 주소를 출력한다. 2차원 배열 array는
// int형이므로 각 열은 4바이트만큼 차이가 난다. 
// 
// 11행부터 13행까지에서 2차원 배열의 각 행을 대표하는 주소를 출력한다. 2차원 배열 array는 int형이고 3열을
// 가지므로 각 행은 4바이트 *3열, 즉 12바이트만큼 차이가 난다.
// 
// 16행부터 17행까지에서 2차원 배열에 저장된 값들을 출력한다.  array[0]은 0번 행의 주소를 나타내면 array[0]+0은
// 0행 0열의 주소, array[0]+1은 0행 1열의 주소, array[1]+0은 1행 0열의 주소를 나타낸다.
// 
// 20행부터 21행까지에서 array[0]==*(array+0), array[1]==*(array+1)이기 때문에 16행부터 17행까지의 array[0]을
// *(array+0)으로 치환하고, array[1]을 *(array+1)으로 치완하면 같은 결과를 출력한다.
// 
//