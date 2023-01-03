#include<stdio.h>
int main ()
{
    int a,b,x;
    scanf("%d%d",&a,&b);
    x=21-a-b;
    if(x<=10 && x>=1)
    printf("%d",x);
    else
    printf("-1");
}