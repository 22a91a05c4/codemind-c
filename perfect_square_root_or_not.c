#include<stdio.h>
int main()
{
    int a,i,t,c=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        t=i*i;
        if(t==a)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}