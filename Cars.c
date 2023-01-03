#include<stdio.h>
int main()
{
    int p;
    scanf("%d",&p);
    if(p<=4)
    printf("1");
    else
    {
        if(p%2==0 && p%4==0)
        {
            printf("%d",p/4);
        }
        else if(p%2==0 && p%4!=0)
        {
            printf("%d",(p/4)+1);
        }
        else if(p%2!=0)
        {
            printf("%d",(p/4)+1);
        }
    }
}