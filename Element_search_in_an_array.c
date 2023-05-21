#include<stdio.h>
int main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k,c=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(k==a[i])
        {
            c++;
        }
    }
    if(c>=1)
    {
        printf("True");
    }
    else
        {
            printf("False");
        }
}