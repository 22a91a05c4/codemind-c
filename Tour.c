#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int x,y,t;
        scanf("%d%d",&x,&y);
        t=x*5+y*7;
        printf("%d
",t);
    }
}