#include <stdio.h>
void call_value(int icopy);
void call_refer(int* ip);

int main(void)
{
	int  i = 777;
	call_value(i); //�Լ�ȣ��
	printf("�� ȣ��  : %d\n", i); //��777

	call_refer(&i); //�Լ�ȣ�� //i �ּ�
	printf("���� ȣ�� : %d\n", i);
	return 0;
}

void call_value(int icopy) {
	//icopy<-777
	icopy = 888;
}

void call_refer(int*ip) { // ip �� i�ּ� ����Ŵ
	*ip = 888; //�ּҰ� ����Ű�� ��
	
}