#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int c,d;
    scanf("%d %d",&c,&d);
    int brr[c][d];
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("
");
    }
    
}