#include<stdio.h>
int main()
{
    int a[100],i,n,s=0,avg,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    avg=s/n;
    for(i=0;i<n;i++)
    {
        if(a[i]<=avg)
        {
            f++;
        }
    }
    printf("%d",f);
}