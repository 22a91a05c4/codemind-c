#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    float w,x,y,z;
    scanf("%f%f",&w,&x);
    c=a+b;
    d=a-b;
    y=w+x;
    z=w-x;
    printf("%d %d
%.1f %.1f",c,d,y,z);
}