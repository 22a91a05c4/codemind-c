#include<stdio.h>
int main()
{
    int a,s,h;
    scanf("%d",&a);
    s=a-2;
    h=a-1;
    if(a%3==0)
    printf("NORMAL");
    else if(s%3==0)
    printf("SMALL");
    else if(h%3==0)
    printf("HUGE");
}
