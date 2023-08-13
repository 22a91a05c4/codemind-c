#include<stdio.h>
#include<math.h>
int main()
{
    int a,p,m,k,r;
    scanf("%d",&a);
    p=a*a;
    m=log10(a)+1;
    k=pow(10,m);
    r=p%k;
    if(r==a)
        {
            printf("Automorphic Number");
        }
    else
        {
            printf("Not an Automorphic Number");
        }
}