#include<stdio.h>
int main()
{
    int a,i,min=1000;
    scanf("%d",&a);
    int n[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<a;i++)
    {
        if(min>=n[i])
        {
            min=n[i];
        }
    }
    printf("%d",min);
}