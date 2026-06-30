#include<stdlib.h>
#include <stdio.h>
#include <limits.h>

void print(int **arr,int n,int m){
    printf("\n ");
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            printf("%d ",arr[row][col]);
        }
        printf("\n");
    }
    printf("\n");
}

void find_Max(int **arr,int n,int m){
    int max=INT_MIN;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(max<arr[row][col]){
                max=arr[row][col];
            }
        }
    }
    printf("The Maximum Element in Matrix:%d\n",max);
    
}

void find_Min(int **arr,int n,int m){
    int min=INT_MAX;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            if(min>arr[row][col])
                min=arr[row][col];
        }
    }
    printf("The Minimum Element in Matrix:%d\n",min);
    printf("\n");
}

void find_Row_Max(int **arr,int n,int m){
    for(int row=0;row<n;row++){
        int max=INT_MIN;
        for(int col=0;col<m;col++){
            if(max<arr[row][col]){
                max=arr[row][col];
            }
        }
        printf("The Maximum Element in Row %d of Matrix:%d\n",row+1,max);
    }
    printf("\n");
}

void find_Row_Min(int **arr,int n,int m){
    for(int row=0;row<n;row++){
        int min=INT_MAX;
        for(int col=0;col<m;col++){
            if(min>arr[row][col]){
                min=arr[row][col];
            }
        }
        printf("The Minimum Element in Row %d of Matrix:%d\n",row+1,min);
    }
     printf("\n");
}

void find_Col_Max(int **arr,int n,int m){
    for(int col=0;col<m;col++){
        int max=INT_MIN;
        for(int row=0;row<n;row++){
            if(max<arr[row][col]){
                max=arr[row][col];
            }
        }
        printf("The Maximum Element in Column %d of Matrix:%d\n",col+1,max);
    }
     printf("\n");
}

void find_Col_Min(int **arr,int n,int m){
    for(int col=0;col<m;col++){
        int min=INT_MAX;
        for(int row=0;row<n;row++){
            if(min>arr[row][col]){
                min=arr[row][col];
            }
        }
        printf("The Minimum Element in Column %d of Matrix:%d\n",col+1,min);
    }
     printf("\n");
}

void find_sum(int **arr,int n,int m){
    int sum=0;
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            sum+=arr[row][col];
        }
    }
    printf("The sum of all Elements in Matrix:%d\n",sum);
     printf("\n");
}

void find_Row_Sum(int **arr,int n,int m){
    for(int row=0;row<n;row++){
        int sum=0;
        for(int col=0;col<m;col++){
            sum+=arr[row][col];
        }
        printf("The sum of all Elements in Row %d of Matrix:%d\n",row+1,sum);
    }
     printf("\n");
}

void find_Col_Sum(int **arr,int n,int m){
    for(int col=0;col<m;col++){
        int sum=0;
        for(int row=0;row<n;row++){
            sum+=arr[row][col];
        }
        printf("The sum of all Elements in Column %d of Matrix:%d\n",col+1,sum);
    }
     printf("\n");
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int **arr=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        arr[i]=(int*)malloc(m*sizeof(int));
    }
    for(int row=0;row<n;row++){
        for(int col=0;col<m;col++){
            scanf("%d",&arr[row][col]);
        }
    }
    print(arr,n,m);
    
    find_Max(arr,n,m);
    find_Min(arr,n,m);
    find_Row_Max(arr,n,m);
    find_Row_Min(arr,n,m);
    find_Col_Max(arr,n,m);
    find_Col_Min(arr,n,m);
    find_sum(arr,n,m);
    find_Row_Sum(arr,n,m);
    find_Col_Sum(arr,n,m);
    
    return 0;
}
