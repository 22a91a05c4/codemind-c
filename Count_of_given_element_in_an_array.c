#include<stdio.h>
int main()
{
    int a[100],i,n,m=0,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            m++;
        }
    }
    printf("%d",m);
}