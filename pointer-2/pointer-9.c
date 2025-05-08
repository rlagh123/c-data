#include <stdio.h>
int amin()
{
	int* pnum, num1 = 200, num2 = 300;




	pnum = &num1; //num1 주소를 pnum에 기억
	(*pnum) += 40; //(*pnum)=(*pnum)+40
	//*pnum은 pnum이 가리키는 곳의 값에 40더함

	pnum = &num2;
	(*pnum) += 50;
	printf("num1=%d num2=%d\n",num1, num2);
	//240 350

	return 0;



}