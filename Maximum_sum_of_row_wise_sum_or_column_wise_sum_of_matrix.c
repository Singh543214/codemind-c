#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int arr[a][b];
    int sum=0;
    for(int i=0;i<a;i++){
        int x=0;
        for(int j=0;j<b;j++){
            scanf("%d",&arr[i][j]);
            x+=arr[i][j];
          }
          if(sum<x) sum=x;
        }
    
    printf("%d",sum);
}
     