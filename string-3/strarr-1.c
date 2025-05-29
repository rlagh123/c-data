#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char ex[4][5] = {
		"abc", //0행
		"xyz", //1행
		"kkkk", //2행
		"love", //3행


	};

//	printf("%c\n", ex[1][2]); //z
//	printf("%c\n", ex[3][3]); //e
//	printf("%s\n", ex[1]);
//	scanf("%c", &ex[0][3]); //0행 3열 요소 입력시 &붙임
//	printf("%c\n", ex[0][3]); //한 요소 출력 %c
//	printf("%s\n", ex[0]); // 힌행 출력%s
	//kkkk=>yyyy 입력 받아서 출력
	scanf("%s",&ex[2]); // 2행을 문자열 전체를 입력받음
	printf("%s\n",ex[2]); // 2행 문자열 전체를 출력

	return 0;
}