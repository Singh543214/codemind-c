#include<stdio.h>
#include<string.h>
int main()
{
    char ch[200],max;
    scanf("%[^
]s",ch);
    for(int i=0;i<=strlen(ch);i++){
        if(max<ch[i]) max=ch[i];
    }
    printf("%c",max);
}