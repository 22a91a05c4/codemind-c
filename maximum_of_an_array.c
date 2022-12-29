#include<stdio.h>
int main()
{
    int a,i,max=-1000;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
      if(max<=n[i])
      {
          max=n[i];
      }
    }
     printf("%d",max);
}