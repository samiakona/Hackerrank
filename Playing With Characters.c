#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch;
    char sen[100],s[99];
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf(" %[^\n]", &sen);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
