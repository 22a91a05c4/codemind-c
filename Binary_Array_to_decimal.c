#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],i,n,s=0,k,p,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        m=(n-i-1);
        k=pow(2,m);
        p=k*a[i];
        s=s+p;
    }
    printf("%d",s);
}