#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int a,s=0,r,t;
        scanf("%d",&a);
        t=a;
        while(a)
        {
            r=a%10;
            s=s*10+r;
            a=a/10;
        }
        if(t==s)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}