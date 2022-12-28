#include<stdio.h>
int main()
{
    int a,i,j,s;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=1;i<a;i++)
    {
        for(j=0;j<(a-1);j++)
        {
            if(n[j]>n[j+1])
            {
                s=n[j];
                n[j]=n[j+1];
                n[j+1]=s;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        printf("%d ",n[i]);
    }
}