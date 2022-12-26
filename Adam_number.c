#include<stdio.h>
int main()
{
    int a,sq,sq1,r,sum=0,d,sum2=0;
    scanf("%d",&a);
    sq=a*a;
    while(a!=0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    sq1=sum*sum;
    while(sq1!=0)
    {
        d=sq1%10;
        sum2=sum2*10+d;
        sq1=sq1/10;
    }
    if(sq==sum2)
    printf("True");
    else
    printf("False");
}