#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];
    scanf("%s",a);
    int i,j;
    for(i=0,j=strlen(a)-1;i<strlen(a)&&j>=0;i++,j--){
        b[j]=a[i];
    }
    int x=strcmp(a,b);
    if(x==0) printf("Palindrome");
    else printf("Not Palindrome");
}