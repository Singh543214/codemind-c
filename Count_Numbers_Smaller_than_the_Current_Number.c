#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
            scanf("%d",&arr[i]);
        }
    for(int i=0;i<a;i++){
        int x=0;
        for(int j=0;j<a;j++){
            if((arr[i]-arr[j])>0) x++;
        }
        printf("%d ",x);
    }
    
}
     