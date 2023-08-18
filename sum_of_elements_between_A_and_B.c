#include<stdio.h>
int main()
{
    int a[100],n,s=0,i,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]>=p && a[i]<=q)
        {
            s=s+a[i];
        }
    }
    printf("%d",s);
}