#include<stdio.h>
int main()
{
    int a,s,c=0;
    scanf("%d",&a);
    for(s=1;s<=a;s++)
    {
        if(s*s==a)
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