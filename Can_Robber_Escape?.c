#include<stdio.h>
int main()
{
    int a[100],i,n,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<n)
        {
            s++;
        }
    }
    if(s==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}