#include <stdio.h>
int main(void)
{
	int i = 10; //정수형 변수애 값 10저장
	char c = 69;//아스키코드 69가 대문자 E
	float f = 12.3; //실수형 변수에 12.3 저장
	printf("i의 값: %d\n", i);     // 변수 i의 주소출력
	printf("c의 값: %c\n", c);    // 변수 c의 주소 출력
	printf("f의 값: %f\n", f);    // 변수 f의 주소출력

	//%p는 포인터을 의미,주소 형식자
	printf("i의 주소: %p\n", &i);      //변수 i의 주소출력
	printf("c의 주소: %p\n", &c);     // 변수 c의 주소 출력
	printf("f의 주소: %p\n", &f);     // 변수 f의 주소 출력
	return 0;
}