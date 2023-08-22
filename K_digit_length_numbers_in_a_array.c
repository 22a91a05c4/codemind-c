#include<stdio.h>
#include<math.h>
int main()
{
    int a[100],n,k,m,b,i,c=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            m=log10(a[i])+1;
            if(k==m)
            {
             c++;
            }

        }
        else if(a[i]<0)
        {
            b=(-1)*(a[i]);
            m=log10(b)+1;
            if(k==m)
            {
                c++;
            }
        }
        else
        {
            m=1;
            if(k==m)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
