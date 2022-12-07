#include<stdio.h>
int main()
{
    int a,r,sum=0,pro=1;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        a=a/10;
        sum=sum+r;
        pro=pro*r;
    }
    if(sum==pro)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}