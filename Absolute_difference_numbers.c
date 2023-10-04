#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,k,r,s=0,l,f=0,h;
    scanf("%lld%lld",&a,&k);
    int y=pow(10,k);
    int g=a%y;
    while(a)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    int e=s%y;
    while(e)
    {
        h=e%10;
        f=f*10+h;
        e=e/10;
    }
    if(g>f)
    {
        printf("%d",g-f);
    }
    else
    {
        printf("%d",f-g);
    }
}