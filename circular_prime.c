#include<stdio.h>
int main()
{
    int n,r,s=0,p=0,m=0,i;
    scanf("%d",&n);
    int t=n;
    while(n)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    for(i=1;i<=t;i++)
    {
        if(t%i==0)
        {
            p++;
        }
    }
    for(int j=1;j<=s;j++)
    {
        if(s%j==0)
        {
            m++;
        }
    }
    if(p==2 && m==2)
    {
        printf("circular prime");
    }
    else if(p==2 && m!=2)
    {
        printf("prime but not a circular prime");
    }
    else
    {
        printf("not prime");
    }
}