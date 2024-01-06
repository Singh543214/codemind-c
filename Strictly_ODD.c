#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],c=0;
    for(int i=0;i<a;i++){
        scanf("%d",arr+i);
        if((arr[i]%2!=0)&&i%2==0) {
            c++;
            break;
        }
    }
    if(c>0) printf("False");
    else printf("True");
}