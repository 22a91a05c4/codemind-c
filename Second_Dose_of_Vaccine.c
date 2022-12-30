#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int d,l,r;
        scanf("%d%d%d",&d,&l,&r);
        if(d>=l&&d<r)
        {
            printf("Take second dose now
");
        }
        else if(d<=l && d<r)
        {
            printf("Too Early
");
        }
        else
        printf("Too Late
");
    }
}