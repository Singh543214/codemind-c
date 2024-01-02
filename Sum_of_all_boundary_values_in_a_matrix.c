#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int x=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
            if(i==0||j==0||i==a-1||j==b-1){
                x+=arr[i][j];
            }
        }
    
    }
    printf("%d",x);
}