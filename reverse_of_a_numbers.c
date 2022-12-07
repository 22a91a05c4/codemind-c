#include<stdio.h>
int main()
{
    int a,r,sum=0,temp;
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        r=a%10;
        sum=sum*10+r;
        a=a/10;
    }
    a=temp;
    printf("%d",sum);
}