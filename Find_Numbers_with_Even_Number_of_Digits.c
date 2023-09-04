#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],i,n,s=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        k=log10(a[i])+1;
        if(k%2==0)
        {
            s++;
        }
    }
    printf("%d",s);
}