#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char key[] = "C"; //����
	char buffer[80] = "";

	do {
		printf("�Ӻ���� ��ġ�� ���� ���� ���Ǵ� ����?");
		gets(buffer); //����Ű ĥ������->���� ���
	} while (strcmp(key, buffer) != 0); //���� ������ �ݺ�//���ϴ�
	// strcmp�� �ι��ڿ��� ���Ͽ� ������ 0����� ���� �ƴϸ� 0�̾ƴѰ�
	//strcpy : ����(����)
	//strcat : ����
	//strcmp : ���� ��
	printf("�¾ҽ��ϴ�!");
	
	return 0;
}