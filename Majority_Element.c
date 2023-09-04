#include<stdio.h>
int main()
{
    int a[100],i,n,b,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=n/2;
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                s++;
            }
        }
        if(s>b)
        {
            printf("%d ",a[i]);
            break;
        }
    }
}