#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d ",a);
    while(a!=1)
    {
        if(a%2==0)
        {
        a=a/2;
        }
        else if(a%2!=0)
        {
        a=a*3+1;
        }
        printf("%d ",a);
    }
}