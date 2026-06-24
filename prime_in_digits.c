#include <stdio.h>
#include<math.h>
int main()
{
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 int num,count=0;
 while(n!=0){
     num=n%10;
     n/=10;
     if(num==1||num==2||num==3||num==5||num==7){
         count++;
     }
 }
 printf("%d",count);
    return 0;
}