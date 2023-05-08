#include<stdio.h>
int main()
{
    int a[100],i,n,k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}