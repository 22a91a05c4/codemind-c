#include<stdio.h>
#include<math.h>
int rep(int a)
{
    int r,s=0,l,t;
    t=a;
    l=log10(a)+1;
    if(l>=2)
    {
        while(t)
        {
            r=t%10;
            s=s+(r*r);
            t=t/10;
        }
        return rep(s);
    }
    else
    {
        return t;
    }
}
int main()
{
    int a;
    scanf("%d",&a);
    int y=rep(a);
    if(y==1 || y==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}