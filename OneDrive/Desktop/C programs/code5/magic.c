#include <stdio.h>
#include<math.h>
int main()
{
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 int num,sum=0;
 num=n;
 while(num>9){
     sum=0;
     while(num!=0){
         sum+=num%10;
         num/=10;
     }
     num=sum;
 }
 if(num==1)
 printf("Magic number");
 else
 printf("Not a Magic number");
    return 0;
}