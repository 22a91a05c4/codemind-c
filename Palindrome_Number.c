#include<stdio.h>
int main()
{
     int n,i;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         int a,r,s=0,t;
        scanf("%d",&a);
        t=a;
        while(a)
        {
            r=a%10;
            s=s*10+r;
            a=a/10;
        }
        if(s==t)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
     }
}