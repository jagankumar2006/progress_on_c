#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int j=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(j!=arr[i]){
            printf("The missing number is %d.",j);
            break;
        }
        j++;
    }
    return 0;
}