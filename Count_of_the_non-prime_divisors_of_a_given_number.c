#include<stdio.h>
int main()
{
    int a,i,j,c=0,s=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c>2)
            {
                s++;
            }
        }
    }
    printf("%d",s+1);
}