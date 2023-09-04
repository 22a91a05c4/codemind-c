#include<stdio.h>
int main()
{
    int a[100],i,n,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        for(j=0;j<n;j++)
        {
            if(a[j]==a[i])
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d ",a[i]);
            s++;
        }
    }
    if(s==0)
    {
        printf("-1");
    }
}