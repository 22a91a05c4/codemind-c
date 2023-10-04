#include<stdio.h>
int main()
{
    int n,i,y=0;
    scanf("%d",&n);
    int a[n],k;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",i);
            y++;
        }
    }
    if(y==0)
    {
        printf("-1");
    }
}