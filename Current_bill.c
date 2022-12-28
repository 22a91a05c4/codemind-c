#include<stdio.h>
int main()
{
    float a,ch,sc,tc;
    scanf("%f",&a);
    if(a<=199)
    {
        ch=a*1.20;
    }
    if(a>=200 && a<400)
    {
        ch=a*1.50;
    }
    if(a>=400 && a<600)
    {
        ch=a*1.80;
    }
    if(a>=600)
    {
        ch=a*2.00;
    }
    if(ch>400)
    {
        sc=ch*0.15;
        tc=sc+ch;
        printf("%.2f",tc);
    }
    else if(ch<=400)
    {
        sc=100;
        tc=sc+ch;
        printf("%.2f",tc);
    }
}