#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            printf("No, it is not Sorted!");
            j=0;
            break;
        }
    }
    if(j==1) printf("Yes, it is Sorted Array!");
    return 0;
}
