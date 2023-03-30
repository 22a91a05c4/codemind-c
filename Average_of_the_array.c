#include<stdio.h>
int main()
{
    int a,i,s=0;
	float avg;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int n;
        scanf("%d",&n);
        s=s+n;
    }
    avg=(s)/a;
    printf("%.2f",avg);
}