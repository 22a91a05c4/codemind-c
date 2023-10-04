#include<stdio.h>
int main()
{
    int n,i,y=0,m=0,j;
    scanf("%d",&n);
    int a[n],k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d ",i);
            y=1;
            break;
        }
    }
    for(j=(n-1);j>=0;j--)
    {
        if(a[j]==k)
        {
            printf("%d ",j);
            m=1;
            break;
        }
    }
    if(y==0)
    {
        printf("-1 ");
    }
    if(m==0)
    {
        printf("-1 ");
    }
}