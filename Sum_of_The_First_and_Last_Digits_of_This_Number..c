#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int b,r,r1,q1,s=0,t;
        scanf("%d",&b);
        r1=b%10;
        while(b!=0)
        {
            r=b%10;
            s=s*10+r;
            b=b/10;
        }
        q1=s%10;
        t=r1+q1;
        printf("%d
",t);
    }
}