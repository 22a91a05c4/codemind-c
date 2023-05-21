#include<stdio.h>
int main()
{
    int v[100],i,m;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        int n,a,b,j,k,c=0,s=0,p;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        for(j=1;j<=n;j++)
        {
            if(j%a==0 && j%b!=0)
            {
                c++;
            }
            else if(j%a!=0 && j%b==0)
            {
                s++;
            }
        }
        p=c+s;
        if(p>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}