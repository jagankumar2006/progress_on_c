#include <stdio.h>

int main() {
    char s1[25], s2[25]; 
    scanf("%s %s", s1, s2);

    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            printf("%d", s1[i] - s2[i]);  
            return 0;
        }
        i++;
    }
    printf("%d", s1[i] - s2[i]);
    return 0;
}
