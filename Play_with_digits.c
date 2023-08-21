#include<stdio.h>
int main()
{
    int a[100],i,n,s=0,r;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int m=a[i];
        while(m)
        {
            r=m%10;
            s=s+r;
            m=m/10;
        }
    }
    printf("%d",s);
}