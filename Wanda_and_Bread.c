#include<stdio.h>
int main()
{
    int n,m,k,c;
    scanf("%d%d%d",&n,&m,&k);
    c=m*k;
    if(n<c || n==c)
    printf("YES");
    else
    printf("NO");
}