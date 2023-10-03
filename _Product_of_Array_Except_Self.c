#include<stdio.h>
int main()
{
    int a[100],i,l,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=1;
        for(l=(i+1);l<n;l++)
        {
            c=c*a[l];
        }
        for(j=(i-1);j>=0;j--)
        {
            c=c*a[j];
        }
        printf("%d ",c);
    }
}