#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int s,q;
        s=sqrt(a[i]);
        q=s*s;
        if(q==a[i])
        {
            c=c+a[i];
        }
    }
    printf("%d",c);
}