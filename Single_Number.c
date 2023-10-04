#include<stdio.h>
int main()
{
    int a[100000],i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                s++;
            }
        }
        if(s==1)
        {
            printf("%d",a[i]);
            break;
        }
    }
}