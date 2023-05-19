#include<stdio.h>
int main()
{
    int a,i,r,s=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    if(s==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}