#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char ex[4][5] = {
		"abc", //0��
		"xyz", //1��
		"kkkk", //2��
		"love", //3��


	};

//	printf("%c\n", ex[1][2]); //z
//	printf("%c\n", ex[3][3]); //e
//	printf("%s\n", ex[1]);
//	scanf("%c", &ex[0][3]); //0�� 3�� ��� �Է½� &����
//	printf("%c\n", ex[0][3]); //�� ��� ��� %c
//	printf("%s\n", ex[0]); // ���� ���%s
	//kkkk=>yyyy �Է� �޾Ƽ� ���
	scanf("%s",&ex[2]); // 2���� ���ڿ� ��ü�� �Է¹���
	printf("%s\n",ex[2]); // 2�� ���ڿ� ��ü�� ���

	return 0;
}