#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[100];
    gets(s);

    printf("Hello, World!\n");
    printf("%s\n", s);
    return 0;
}
