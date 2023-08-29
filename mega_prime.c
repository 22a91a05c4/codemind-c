#include<stdio.h>
#include<math.h>
int meg(int a)
{
    int i,s=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            s++;
        }
    }
    if(s==2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int c=0,a,r;
    scanf("%d",&a);
    int m=log10(a)+1;
    if(meg(a)==true)
    {
        while(a)
        {
            r=a%10;
            if(meg(r)==true)
            {
                c++;
            }
            a=a/10;
        }
        if(c==m)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}