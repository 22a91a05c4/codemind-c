#include<stdio.h>
int main()
{
    int n,a[100],i,s=0,c=0;
    int x=n/2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0 && a[i]%2!=0)
        {
            s++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            c++;
        }
    }
    if(s>0)
    {
        if(c==s)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
    }
}