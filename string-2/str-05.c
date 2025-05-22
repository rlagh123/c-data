#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char key[] = "C"; //정답
	char buffer[80] = "";

	do {
		printf("임베디드 장치에 가장 많이 사용되는 언어는?");
		gets(buffer); //엔터키 칠때마다->버퍼 기억
	} while (strcmp(key, buffer) != 0); //같이 않으면 반복//비교하다
	// strcmp는 두문자열을 비교하여 같으면 0결과로 나옴 아니면 0이아닌값
	//strcpy : 복사(대입)
	//strcat : 연결
	//strcmp : 문자 비교
	printf("맞았습니다!");
	
	return 0;
}