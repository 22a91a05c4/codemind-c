#include<stdio.h>
int main()
{
    int a,r,s=0;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    printf("%d",s);
}