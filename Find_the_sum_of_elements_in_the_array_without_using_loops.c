#include<stdio.h>
void sum(int *a,int n,int s,int i)
{
    while(i<n)
    {
        s=s+a[i];
        return sum(a,n,s,i+1);
    }
    printf("%d",s);
}
int main()
{
    int a[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum(a,n,0,0);
}