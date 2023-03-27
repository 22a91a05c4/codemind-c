#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int b,r,s=0,t;
        scanf("%d",&b);
        t=b;
        while(b!=0)
        {
            r=b%10;
            s=s*10+r;
            b=b/10;
          if(t==s)
           {
             c++;
           }
        }
    }
    if(c==a)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}
