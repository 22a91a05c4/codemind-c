#include<stdio.h>
int main()
{
    int a[100],i,n,m,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]<=m)
        {
            c=c+a[i];
        }
    }
    printf("%d",c);
}