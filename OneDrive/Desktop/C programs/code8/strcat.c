#include <stdio.h>

int main() {
    char s1[100], s2[100]; 
    scanf("%s", s1);
	scanf("%s",s2);
    int i = 0;
	for(i=0;s1[i]!='\0';i++);
	int j=i;
	i=0;
    while (s2[i] != '\0') {
        s1[j]=s2[i];
        i++;
		j++;
    }
    printf("%s", s1);
    return 0;
}