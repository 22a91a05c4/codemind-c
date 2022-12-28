#include<stdio.h>
int main()
{
    int a,i,s=0;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
       if(n[i]%2==0)
       break;
       else
       s=s+n[i];
    }
    printf("%d",s);
}