#include <stdio.h>

int main(void)
{
	int i = 10; 
	double f = 12.3;
	int* pi = NULL;

	double* pf = NULL;
	pi = &i;
	pf = &f;//f주소->pf
	//pf=&i;//i주소->pf
	printf("%p %p %d \n",*pi, &i,i);
	printf("%p %p %1.f \n",pf, &f,f);
	return 0;
}
//int i 정수형변수 : 값 저장
//int *j 정수형을 가르키는 주소 저장, 포인터변수
//i-> 값
//&i->포인터변수이므로 주소
//*j->포인터변수*붙임->가르키는 주소에 가서 그 값을 가져옴