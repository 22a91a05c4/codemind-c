#include<stdio.h>
int main()
{
    int a,i,s=0,t;
    scanf("%d",&a);
    t=a;
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            s=s+i;
        }
    }
    if(s>=t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}