#include<stdio.h>
int main()
{
    int a[100],b[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    int c[n];
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",c[i]);
    }
}