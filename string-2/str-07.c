#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //���ڿ� �Լ��� ����
#include <string.h>

int main() {
	char name[5][10];//name���� ���ڿ� ����(�̸�����)
	                 //5�� 10�� ����� �̸�->5 //���̸��� ���� 9��
	char addr[5][30];  // addr�� �� ���ڿ� ���� (�ּ� ����)
	               
	char search[10]; //ã�����ϴ� ����� �̸� 9���̳���
	int i;
	//�̸��� �ּ� �Է�
	//�Է°��� 5�� ����
	for (i = 0; i < 5; i++) //5�� �Է�       //0~4 �濡 �Է�
	{
		printf("�̸�%d : ", i + 1); // i�� 0������ ��¹����� ù��° ������ 1�� 
			//����ϱ����� i+1
		scanf("%s",& name[i]); //�̸� 5����� �ݺ��Ͽ� �Է¹���
		printf("�ּ� %d:", i + 1);
		scanf("%s", &addr[i]);


	}
	//�˻��� �̸� �Է� ����
	printf("�˻��� �̸���:");
	scanf("%s", search);

	for (i = 0; i < 5; i++)
	{
		if (strcmp(name[i], search) == 0)
			printf("�̸�:%s �ּ�: %s\n", name[i], addr[i]);
		return 0;
	}
	printf("ã�� �̸��� �����ϴ�");
	return 0;
}