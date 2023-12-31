#include <stdio.h>
int main(void) {

	char array[] = "ABCD";	//문자열을 배열에 저장
	const char* p = "ABCD";	// 문자열 상수의 시작주소를 p에 저장

	 // p[0] = 'X';// 에러, 문자열 ABCD는 문자열 상수(변경 불가)
	array[0] = 'X';

	p = array;	// 변경 가능, p는 포인터 변수
	// array += 1;	// 에러, 배열 이름은 상수(변경이 불가). 하지만 array+1는 그냥 가능하다. 가리키기만 할 뿐이기 때문이다.
	array[1] = 'C';// 변경가능

	printf("%s \n", p);
	printf("%s \n", array);

	return 0;


}

//
// 4행에서는 문자열 상수 ABCD를 배열 array에 저장한다. 배열에 문자열을 저장했기 때문에 메모리 공간의
// 주소가 부여되고, 배열의 요소를 통한 메모리 공간의 접근이 다음과 같이 가능하다.
// 
// 5행에서 문자열 상수 ABCD의 시작 주소를 포인터 변수p에 저장한다. 문자열 상수 ABCD가 저장된 메모리 공간은
// 이름이 없다. 메모리 공간에 붙여진 이름이 없다는 것은 모두 상수이다.
// 
// 7행에서 포인터 변수 p를 통해 이름이 없는 상수 메모리에 접근해서 상수의 값을 변경한다. 하지만 변수 p로
// 접근한 문자열 상수는 변경할 수 없다.
// 
// 8행에서 배열은 값을 변경할 수 있다.
// 
// 10행에서 p는 포인터 변수이므로 변경이 불가능하다.
// 
// 11행에서는 array는 배열 이름(배열의 시작 주소), 즉 상수이기 때문에 변경 불가하다.
// 
// 
// 앞의 예제에서 문자열 상수 "ABCD"는 비록 이름이 없지만 메모리 공간에 저장이 된다.
// 
