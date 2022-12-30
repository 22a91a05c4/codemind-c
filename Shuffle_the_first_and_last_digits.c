#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,q,r,d,m,p,sh=0;
    scanf("%d",&a);
    r=a%10;
    d=log10(a)+1;
    m=pow(10,d-1);
    q=a/m;
    p=(a%m)-r;
    sh=r*m+p+q;
    printf("%d",sh);
}