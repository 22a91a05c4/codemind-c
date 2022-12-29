#include<stdio.h>
int main()
{
    int a,i,c,k1=1,k=1;
    scanf("%d",&a);
    printf("0 0 ");
    for(i=1;i<a;i++)
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