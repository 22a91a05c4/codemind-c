#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    for(i=1;i<a;i++)
    {
        if(i*(i+1)==a)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}