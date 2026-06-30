#include <stdio.h>
int main(){
    char s1[100],ch; 
    scanf("%s %c", s1,&ch);
    int i = 0;
	while(s1[i] != '\0' && s1[i] != ch) {
        i++;
    }
    if(s1[i] == '\0')
        printf("%d",-1);
    else
    printf("%d", i+1);
    return 0;
}