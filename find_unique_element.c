#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int freq[10]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]=1;
    }
    for(int i=0;i<10;i++){
        if(freq[i]==1){
            printf("%d ",i);
        }
    }
    return 0;
}