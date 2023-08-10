#include<stdio.h>
int main()
{
    int a[100],n,i,c=0;
    int p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&p,&q);
    for(i=0;i<n;i++)
    {
        if(a[i]<p || a[i]>q)
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c<1)
    {
        printf("-1");
    }
}