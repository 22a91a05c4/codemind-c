#include<stdio.h>
int main()
{
    long long int n,i,a[100],o=0,e=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("%d %d",e,o);
}