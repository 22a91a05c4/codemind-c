#include<stdio.h>
int main()
{
    int a[100],n,i,x=0,y=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==0 || i%2==0)
        {
            x=x+a[i];
        }
        else if(i%2!=0)
        {
            y=y+a[i];
        }
    }
    int k;
    if(x>y)
    {
        k=x-y;
    }
    else
    {
        k=y-x;
    }
    if(k%4==0)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}