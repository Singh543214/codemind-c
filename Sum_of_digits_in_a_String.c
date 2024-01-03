#include<stdio.h>
#include<string.h>
int main()
{
    int sum=0;
    char ch[200];
    scanf("%[^
]s",ch);
    for(int i=0;i<=strlen(ch);i++){
        if(ch[i]>='0'&&ch[i]<='9'){
            sum+=(ch[i]-'0');
        }
    }
    printf("%d",sum);
}