#include<stdio.h>
int main()
{
    int d,c,s,g;
    int a1,a2,a3;
    int b1,b2,b3;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d",&a1,&a2,&a3);
    scanf("%d%d%d",&b1,&b2,&b3);
    s=a1+a2+a3;
    g=b1+b2+b3;
    if(s>=150 && g>=150)
    {
         if(c<(2*d))
        {
              printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if(s<150 || g<150)
    {
        printf("NO");
    }
}