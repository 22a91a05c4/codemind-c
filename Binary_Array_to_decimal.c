#include<stdio.h>
#include<math.h>
int main()
{
    int n,a[100],i,j,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=n-1;
    for(i=0;i<n;i++)
    {
        s=s+(a[i]*(pow(2,j)));
        j--;
    }
    printf("%d",s);
}