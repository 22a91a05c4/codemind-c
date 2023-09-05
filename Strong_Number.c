#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,r,t,i,s=0;
        scanf("%d",&a);
        t=a;
        while(a)
        {
            int f=1;
            r=a%10;
            for(i=1;i<=r;i++)
            {
                f=f*i;
            }
            s=s+f;
            a=a/10;
        }
        if(s==t)
        {
            printf("Strong
");
        }
        else
        {
            printf("Not Strong
");
        }
    }
}