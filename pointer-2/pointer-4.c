#include <stdio.h>
int main(void)//return에 반환되는 값이 정수형
//return 없거나 return;경우 -> void 함수명()
{
	int i = 3000;
	int* p = NULL; //*는 일반 변수가 아닌 포인터변수라고 선언함

	p = &i;//p는 i주소 가리킨다
	printf("p=%p\n", p);//p가 포인터변수 이므로 주소 출력
	printf("&i=%p\n\n", &i);//i는 일반변수,&는 주소출력(%p)
	printf("i=%d\n", i);//값 출력
	printf("*p=%d\n", *p);
	//간접 참조 연산자*: 포인터변수가 가리키는 주소거 가서 그 값을 가져옴(%d)

	return 0;//정상 종료
}