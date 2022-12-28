#include<stdio.h>
int main()
{
    int a,r,q,s=0,t;
    scanf("%d",&a);
    r=a/1000;
    q=a%1000;
    while(q!=0)
    {
        t=q%10;
        s=s*10+t;
        q=q/10;
    }
    printf("%d%d",r,s);
}