#include<stdio.h>
#include<math.h>
int main()
{
    int a,i,k=1,k1=0,f,h=0,p;
    printf("0 0 ");
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(i%2==0)
        {
            f=pow(3,k);
            printf("%d ",f-1);
            k++;
        }
        else
        {
            p=pow(2,k1);
            h=h+p;
            printf("%d ",h);
            k1++;
        }
    }
}