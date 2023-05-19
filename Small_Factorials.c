#include<stdio.h>
int main()
{
    int a[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int t,f=1,j;
        scanf("%d",&t);
        for(j=1;j<=t;j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}
