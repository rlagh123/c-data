#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int i;
    char fruits[3][20]; //0~2�� 0~19��, 3�� �� 20�� ��
    for (i = 0; i < 3; i++) { //0~2�� �ݺ�
        printf("���� �̸��� �Է��Ͻÿ�: ");
        scanf("%s", fruits[i]); //����� �Է�(1�پ� �Է�)
    }
    for (i = 0; i < 3; i++)//0~2�� 3�� �ݺ�
        printf("%d��° ����: %s\n", i, fruits[i]);//1�� (��)�� ���
    return 0;
}