#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int n,t,sum=0,r;
        scanf("%d",&n);
        t=n;
        while(n!=0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        if(t==sum)
            printf("True
");
            else
            printf("False
");
    }
}
