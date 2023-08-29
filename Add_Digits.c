#include<stdio.h>
#include<math.h>
void dig(int a,int m)
{
    int s=0,r,k;
    if(m>=2)
    {
        while(a)
        {
            r=a%10;
            s=s+r;
            a=a/10;
        }
        k=log10(s)+1;
        return dig(s,k);
    }
    else
    {
        printf("%d",a);
    }
}
int main()
{
    int a,m;
    scanf("%d",&a);
    m=log10(a)+1;
    dig(a,m);
}