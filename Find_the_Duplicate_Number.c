#include<stdio.h>
int main()
{
    int a[100],i,n,j;
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
        if(c==2)
        {
            printf("%d",a[i]);
            break;
        }
    }
}