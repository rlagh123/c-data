#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char menu[5][10] = {
       "init",
       "open",
       "close",
       "read",
       "write"
    };
    for (i = 0; i < 5; i++)
        printf("%d ��° �޴�: %s \n", i, menu[i]);

    return 0;
}