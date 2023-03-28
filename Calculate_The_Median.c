#include<stdio.h>
int sort(int *a,int n)
{
    int i,j,t;
    for(i=1;i<n;i++)
    {
        t=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<t)
            {
                a[j+1]=t;
                break;
            }
            else
            {
                a[j+1]=a[j];
            }
        }
        if(j==-1)
        {
            a[0]=t;
        }
    }
    for(i=0;i<n;i++)
    {
    	int l=0,h=n-1,ag,q;
        ag=(l+h)/2;
        if(ag%2==0)
        {
            q=(n/2)+1;
            printf("%d",a[q-1]);
            break;
        }
        else
        {
            q=(n+1)/2;
            printf("%d",a[q]);
            break;
        }
	}
}
int main()
{
    int a[100],n,i,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ans=sort(a,n);
}