#include<stdio.h>
int main()
{
    int a,c,b;
    scanf("%d",&a);
    if(a%5==0)
    {
        c=a/5;
        b=c%2;
        if(b==0)
        {
            printf("%d",a/10);
        }
        else
        {
            printf("%d",(a/10)+1);
        }
    }
    else
    {
        printf("-1");
    }
}