#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int x,n,sc;
        scanf("%d%d",&x,&n);
        sc=(x*n)/10;
        printf("%d
",sc);
    }
}