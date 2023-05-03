#include<stdio.h>
int main()
{
    int a,r,s=0,p,q,m,n=0;
    scanf("%d",&a);
    p=a*a;
    while(a)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    q=s*s;
    while(q)
    {
        m=q%10;
        n=n*10+m;
        q=q/10;
    }
    if(n==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}