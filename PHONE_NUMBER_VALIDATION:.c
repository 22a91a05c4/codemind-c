#include<stdio.h>
#include<math.h>
int main()
{
    long int a,m,r,sum=0,l;
    scanf("%ld",&a);
    m=log10(a)+1;
    while(a!=0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    l=sum%10;
    if(m==10&&l>=1)
    {
        printf("Valid");
    }
    else 
    {
        printf("Invalid");
    }
}