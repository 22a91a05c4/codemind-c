#include<stdio.h>
int main()
{
    int a[100],n,b,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=n/2;
    for(i=(n-1);i>=b;i--)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<b;i++)
    {
        printf("%d ",a[i]);
    }
}