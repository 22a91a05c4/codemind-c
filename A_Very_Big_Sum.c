#include<stdio.h>
int main()
{
    long long int a[1000],i,n,s=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%lld",s);
}