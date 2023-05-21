#include<stdio.h>
int main()
{
    int a[100],i,n,c=0,s=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
    avg=c/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            s++;
        }
    }
    printf("%d",s);
}