#include <stdio.h>

int main() {
    char s1[100], s2[100]; 
	int n;
    scanf("%s %d", s1,&n);

    int i = 0;
    while (s1[i] != '\0'&&i<n) {
        s2[i]=s1[i];
        i++;
    }
    printf("%s", s2);
    return 0;
}