#include<stdio.h>
int main()
{
    int a,b,c,i,co=0;
    scanf("%d%d%d",&a,&b,&c);
    for(i=a;i<=b;i++)
    {
        if(i%c==0)
        co++;
    }
    printf("%d",co);
}