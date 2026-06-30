#include <stdio.h>

int main() {
    char s1[100], s2[100]; 
int n;	
    scanf("%s %s %d", s1, s2,&n);

    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i!=n) {
        if (s1[i] != s2[i]) {
            printf("%d", s1[i] - s2[i]);  
            return 0;
        }
        i++;
    }
    printf("%d", s1[i] - s2[i]);
    return 0;
}
