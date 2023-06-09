#include<stdio.h>
int main()
{
    int a,b,i,j,k,c;
    scanf("%d%d",&a,&b);
    for(i=(a+b+1);i<=(a+b)*(a+b);i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k=i;
            break;
        }
    }
    printf("%d",k-(a+b));
}