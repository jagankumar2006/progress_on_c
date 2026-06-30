#include <stdio.h>

int main() {
    char s1[100], s2[100]; 
	int n;
    scanf("%s %s %d", s1,s2,&n);
    int i = 0;
	for(i=0;s1[i]!='\0';i++);
	int j=i;
	i=0;
    while (s2[i] != '\0'&&i<n) {
        s1[j]=s2[i];
        i++;
		j++;
    }
    printf("%s", s1);
    return 0;
}