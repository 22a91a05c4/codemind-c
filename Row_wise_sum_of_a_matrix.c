#include<stdio.h>
int main()
{
    int a,b,i,j,s=0,n[10][10];
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            s=s+n[i][j];
        }
        printf("%d ",s);
        s=0;
    }
}