#include<stdio.h>
int main()
{
    int r,c,i,j,a[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<c;i++)
    {
        int s=0;
        for(j=0;j<r;j++)
        {
            s=s+a[j][i];
        }
        printf("%d ",s);
    }
}
