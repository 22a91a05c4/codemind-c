#include<stdio.h>
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int t=a[i],c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]<t)
            {
                c++;
            }
        }
        printf("%d ",c);
    }
}