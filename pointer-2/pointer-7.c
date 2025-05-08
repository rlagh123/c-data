#include <stdio.h>
int main()
{
	int x = 500;
	double y = 20.34;
	int* p1 = NULL;
	int* p2 = NULL;

	p1 = &x; //p1이 x주소
	p2 = &y; //p2가 y주소
	printf("%p %p\n", p2, &y);
	//p2 = p1; //p1 주소를  p2대입
	//printf("%p %p\n", p1, p2);
	// x를 이용하여 주소와 값 출력
	printf(" %p %d\n",&x,x );
	//pi를 이용하여 주소와 값 출력
	printf("%p %d\n",p1,*p1 );
	return 0;
}