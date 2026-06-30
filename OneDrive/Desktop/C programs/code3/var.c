#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter a number for calculating Factorial:");
    scanf("%d",&n);
    printf("The Factorial of %d is %d.\n",n,fact(n));
    return 0;
}