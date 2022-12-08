#include<stdio.h>
int main()
{
    int a,r,sum=0,pro=1,tot;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        sum=sum+r;
        pro=pro*r;
    }
    tot=pro-sum;
    printf("%d",tot);
}