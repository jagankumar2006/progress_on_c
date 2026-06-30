#include <stdio.h>
int main()
{
    char *s;
    scanf("%s",s);
    int i=0;
    for(i=0;s[i]!='\0';i++);
    printf("%d",i);
    return 0;
}