#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int first_min=INT_MAX;
    int second_min=INT_MAX;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]<first_min){
            first_min=arr[i];
        }
        else if(arr[i]<second_min&&arr[i]>first_min){
            second_min=arr[i];
        }
    }
    printf("%d",second_min);
    return 0;
}