
#include <stdio.h>
#include<math.h>
int main()
{
 int n,sum=0;
 printf("Enter a number:");
 scanf("%d",&n);
 for(int i=1;i<=n/2;i++){
     if(n%i==0){
         sum+=i;
     }
 }
 if(n=sum){
     printf("Perfect number!");
 }
 else if(sum<n){
     printf("Deficiet number!");
 }
 else{
     printf("Ambutent number!");
 }
    return 0;
}