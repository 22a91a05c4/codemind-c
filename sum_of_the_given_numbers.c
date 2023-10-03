#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        long long int m,n,s;
        scanf("%lld%lld",&m,&n);
        s=m+n;
        printf("%lld
",s);
    }
}