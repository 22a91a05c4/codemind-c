#include<stdio.h>
int main()
{
    int a[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(n%2==0)
    {
        for(i=0;i<(n/2);i++)
        {
            printf("%d ",a[i]);
            j=(n-1-i);
            if(i!=j)
            {
                printf("%d ",a[j]);
            }
        }
    }
    else
    {
        for(i=0;i<(n/2)+1;i++)
        {
            printf("%d ",a[i]);
            j=(n-1-i);
            if(i!=j)
            {
                printf("%d ",a[j]);
            }
        }
        printf("0");
    }
}