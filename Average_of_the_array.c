#include<stdio.h>
int main()
{
    int a[100],n,i;
    float ag,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    ag=s/n;
    printf("%.2f",ag);
}