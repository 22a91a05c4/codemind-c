#include<stdio.h>
int prime(int b)
{
    int c=0,i;
    for(i=1;i<=b;i++)
    {
        if(b%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a[100],n,i;
    float s=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(prime(a[i]))
        {
            s=s+a[i];
            d++;
        }
    }
    float avg=(s)/d;
    printf("%.2f",avg);
}