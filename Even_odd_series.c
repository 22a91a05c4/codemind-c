#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,k=0,k1=2,c,d;
    scanf("%d",&a);
    printf("2 0 ");
    for(i=1;i<a;i++)
    {
        if(i%2==0)
        {
            c=pow(3,k);
            printf("%d ",c);
            k++;
        }
        else
        {
            d=pow(2,k1);
            printf("%d ",d);
            k1++;
        }
    }
}