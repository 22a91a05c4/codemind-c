#include<stdio.h>
int main()
{
    int a,b,s,h,i;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        s=b;
    }
    else
    {
        s=a;
    }
    for(i=s;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            h=i;
            printf("%d ",i);
            break;
        }
    }
}