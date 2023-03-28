#include<stdio.h>
int main()
{
    long int a,r,c=0;
    scanf("%ld",&a);
    while(a!=0)
    {
       r=a%10;
       if(r==1)
       {
           c++;
       }
       a=a/10;
    }
    printf("%ld",c);
}
