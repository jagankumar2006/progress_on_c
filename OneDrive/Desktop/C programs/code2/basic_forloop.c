#include<stdio.h>
#include<string.h>
int main(){
    char name[50];
    printf("Enter Your name:");
    scanf("%s",name);
    for(int i=0;i<5;i++){
        printf("%d.Hello!\n",i);
    }
    return 0;
}