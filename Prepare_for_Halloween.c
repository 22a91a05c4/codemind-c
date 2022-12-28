#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        int z,y,d,c;
        scanf("%d%d",&z,&y);
        d=z*2;
        c=y*5;
        if(d>c)
        printf("Chocolate
");
        else if(d<c)
        printf("Candy
");
        else if(d==c)
        printf("Either
");
    }
}
