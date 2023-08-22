#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],n,m,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            m=log10(a[i])+1;
        }
        else if(a[i]<0)
        {
	int b=(-1)*(a[i]);
            m=log10(b)+1;
        }
        else
        {
            m=1;
        }
        printf("%d ",m);
    }
}
