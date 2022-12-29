#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,k=0,k1=0,r,m;
    scanf("%d",&a);
    for(i=1;i<=a+1;i++)
    {
        if(i%2==0)
        {
           r=pow(5,k)-3;
           printf("%d ",r);
           k++;
        }
        else
        {
            m=pow(3,k1)+2;
            printf("%d ",m);
            k1++;
        }
    }
}