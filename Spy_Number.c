#include<stdio.h>
int main()
{
    int a,r,s=0,f=1;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        s=s+r;
        f=f*r;
        a=a/10;
    }
    if(s==f)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}