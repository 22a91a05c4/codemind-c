#include<stdio.h>
int main()
{
    int u;
    float b,ch,sc,tc;
    scanf("%d",&u);
    if(u<=199)
    {
        b=1.20;
        ch=u*b;
    }
    else if(u>=200 && u<400)
    {
        b=1.40;
        ch=u*b;
    }
    else if(u>=400 && u<600)
    {
        b=1.60;
        ch=u*b;
    }
    else if(u>=600 && u<800)
    {
        b=1.80;
        ch=u*b;
    }
    else if(u>=800)
    {
        b=2.00;
        ch=u*b;
    }
    if(ch>400)
    {
        sc=ch*0.15;
        tc=sc+ch;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",b);
        printf("Bill: %.2f
",ch);
        printf("Surcharge: %.2f
",sc);
        printf("Total Amount: %.2f",tc);
    }
    else
    {
        sc=0;
        tc=sc+ch;
        printf("Units Consumed: %d
",u);
        printf("Cost per Unit: %.2f
",b);
        printf("Bill: %.2f
",ch);
        printf("Surcharge: %.2f
",sc);
        printf("Total Amount: %.2f",tc);
    }
}