#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //strcpy,strcat
#include <stdio.h>

int main()
{
	char a[11] = "KOREA"; //�ڿ� null(\0) ä����
	char b[] = "12345"; //6�� ��� ���� �迭

	strcat(a, b); //string.h����
              //b�� a�� ����
	          //null���� �����ϰ� ����,���̰��� ����
	puts(a); // ���ڿ� ���, �ٹٲ� ����
	       // puts()=> ���ڿ��� ȭ�鿡 ��� �� Ŀ���� �����ٷ� ó������ �̵�

	printf("%s", b);

	return 0;
	//KOREA12345
	//12345
}













//int main(void)
//{
//	char string[80];
//	
//	strcpy(string, "Hello world from"); //����
//	strcat(string, "strcpy");  //���� �ٿ��ִ´�.
//	strcat(string, "and");
//	strcat(string, "strcat!");
//	printf("string=%s\n", string);
//	
//	return 0;
//	
//}