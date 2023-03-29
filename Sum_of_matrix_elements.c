#include<stdio.h>
int main()
{
    int a[100],r,c,i,j,s=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            int p,d,f;
            scanf("%d",&p);
            s=s+p;
        }
    }
    printf("%d",s);
}