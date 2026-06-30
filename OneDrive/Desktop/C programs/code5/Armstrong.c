#include <stdio.h>
#include<math.h>
int main()
{
 int n;
 printf("Enter a number:");
 scanf("%d",&n);
 int sum=0,num,num_len=0;
 num=n;
 do{
     num_len++;
     num/=10;
 }while(num!=0);
 num=n;
for(int i=0;i<num_len;i++){
    sum+=pow((num%10),num_len);
    num/=10;
}
if(sum==n){
    printf("Armstrong number");
}
else{
    printf("Not an Armstrong number");
}
    return 0;
}