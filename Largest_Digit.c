#include<stdio.h>
int main()
{
    int a,r,m=0;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        if(r>m)
        {
            m=r;
        }
        a=a/10;
    }
    printf("%d",m);
}