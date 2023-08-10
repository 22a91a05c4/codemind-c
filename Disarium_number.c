#include<stdio.h>
#include<math.h>
int main()
{
    int a,r,m,p,s=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        m=log10(a)+1;
        r=a%10;
        p=pow(r,m);
        s=s+p;
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