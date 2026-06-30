#include <stdio.h>

int main() {
    char s1[100], s2[100]; 
    scanf("%s", s1);

    int i = 0;
    while (s1[i] != '\0') {
        s2[i]=s1[i];
        i++;
    }
    printf("%s", s2);
    return 0;
}
