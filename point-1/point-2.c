#include<stdio.h>

int main(void)
{
	//int i = 10; //정수형변수에 값이 10
	//double f = 12.3; //실수형 변수에 값이 12.3
	//int* pi = NULL; //포인트 변수(주소 기억) 선언
	//    //NULL은 아무것도 가리키지 않음
	//double* pf = NULL; //포인트변수
	////실수형 변수의 주소 기억할 것임
	//pi = &i; //i의 주소를 pi에 저장
	//pf = &f; //f의 주소를 pf에 저장

	//printf("%p%p\n", pi, &i); //i의 주소를 출력
	//printf("%p%p\n", pf, &f); //f의 주소를 출력

	int k = 300;
	int y = 20;
	printf("%d\n", k); //300
	printf("%p\n",&k) //k의 주소
	//포인트 변수 선언 po(아무주소를 가리키면 안됨)
	int* pi = NULL; //포인터변수
	po = &y; //주소를 po라는 포인터 변수에 줌
	printf("%p\n", po);

	printf("%d\n", *po); //20
	//포인터 변수에 *붙이면 그 기억한 주소에 그 값을 가져옴

	return 0;


}