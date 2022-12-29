#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    if(a>=3 && a<=100)
    {
    for(i=0;i<a;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
    for(i=a-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("
");
    }
   }
   else 
    printf("The pattern is not possible");
}