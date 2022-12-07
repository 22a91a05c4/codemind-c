#include<stdio.h>
int main()
{
    int a,sq,r,sum=0;
    scanf("%d",&a);
     sq=a*a;
    while(sq!=0)
    {
        r=sq%10;
        sq=sq/10;
        sum=sum+r;
    }
    if(sum==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}