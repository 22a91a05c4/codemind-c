#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,k=0,k1=0,b,c;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        {
           b=pow(3,k);
           printf("%d ",b);
           k++;
        }
        else if(i%2!=0)
        {
            c=pow(2,k1);
            printf("%d ",c);
            k1++;
        }
    }
}