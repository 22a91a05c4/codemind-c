#include<stdio.h>
int main()
{
    int a[100],i,n,k,s=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%k==0)
        {
            s++;
        }
    }
    printf("%d",s);
}