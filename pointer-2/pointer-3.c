#include <stdio.h>

int main(void)
{
	int i = 10; 
	double f = 12.3;
	int* pi = NULL;

	double* pf = NULL;
	pi = &i;
	pf = &f;//f�ּ�->pf
	//pf=&i;//i�ּ�->pf
	printf("%p %p %d \n",*pi, &i,i);
	printf("%p %p %1.f \n",pf, &f,f);
	return 0;
}
//int i ���������� : �� ����
//int *j �������� ����Ű�� �ּ� ����, �����ͺ���
//i-> ��
//&i->�����ͺ����̹Ƿ� �ּ�
//*j->�����ͺ���*����->����Ű�� �ּҿ� ���� �� ���� ������