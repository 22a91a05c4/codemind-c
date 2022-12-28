#include<stdio.h>
int main()
{
    int a,r,p,sq1,sq2,s1=0,s2=0;
    scanf("%d",&a);
    sq1=a*a;
    while(a!=0)
    {
        r=a%10;
        s1=s1*10+r;
        a=a/10;
    }
    sq2=s1*s1;
    while(sq2!=0)
    {
        p=sq2%10;
        s2=s2*10+p;
        sq2=sq2/10;
    }
    if(s2==sq1)
    printf("True");
    else
    printf("False");
}