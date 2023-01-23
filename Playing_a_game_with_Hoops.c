#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        int h,ans;
        scanf("%d",&h);
        if(h%2==0)
        {
            ans=h/2;
            printf("%d
",ans);
        }
        else
        {
            ans=(h/2)+1;
            printf("%d
",ans);
        }
    }
}