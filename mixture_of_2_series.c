#include<stdio.h>
int main()
{
    int a,i,c,k1=0,k=0;
    scanf("%d",&a);
    for(i=1;i<=a+1;i++)
    {
        if(i%2==0)
        {
            printf("%d ",k);
            k++;
        }
        else
        {
            c=2*k1;
            printf("%d ",c);
            k1++;
        }
        
    }
}