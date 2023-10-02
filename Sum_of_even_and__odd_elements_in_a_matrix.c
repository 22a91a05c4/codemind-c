#include<stdio.h>
int main()
{
    int r,c,i,j,a[100][100],s=0,o=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]%2==0)
            {
                s=s+a[i][j];
            }
            else
            {
                o=o+a[i][j];
            }
        }
    }
    printf("%d %d",s,o);
}
