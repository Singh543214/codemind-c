#include<stdio.h>
#include<string.h>
int main(){
    int a;
    scanf("%d",&a);
     for(int i=1;i<=a;i++){
         int x=0;
         char ch[100];
         scanf("%s",ch);
         for(int j=0;j<=strlen(ch);j++){
             if(ch[j]>='0'&&ch[j]<='9'){
                 x=1;
                 break;
             }
         }
         if(x==1) printf("Yes
");
         else printf("No
");
     }
}