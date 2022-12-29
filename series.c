#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,k=1,c,b,k1=0,f,g=1,d=0;
    scanf("%d",&a);
    for(i=1;i<=a+1;i++)
    {
        if(i%2==0)
        {
            c=pow(3,k);
            b=c-1;
            printf("%d ",b);
            k++;
        }
        else
        {
           f=pow(2,k1);
           d=f+d;
           printf("%d ",d);
           k1++;
        }
    }
}