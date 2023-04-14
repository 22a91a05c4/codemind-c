#include<stdio.h>
int main()
{
    int a[100],i,n,c=0,b=0,ans,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]<=m)
        {
            c++;
        }
        else
        {
            b++;
        }
    }
    k=b*2;
    ans=c+k;
    printf("%d",ans);
}