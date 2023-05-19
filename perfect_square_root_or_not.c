#include<stdio.h>
int main()
{
    int a,c=0,i,s;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=i*i;
        if(s==a)
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