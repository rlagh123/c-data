#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	char str1[4] = "Seoui";
//	char str2[3] = { 'i','s','\0' };
//	char str3[] = "the capital city of Korea.";
//	printf("%s %s %s\n", str1, str2, str3);
//	return 0;
//
//}
#include <stdio.h>
int main()
{
	int i;
	char str[6];
	str[0] = 'K';
	str[1] = 'O';
	str[2] = 'R';
	str[3] = 'E';
	str[4] = 'A';
	for (i = 0; i < 5; i++) {
		printf("%c", str[i]);

	}
	return 0;
}