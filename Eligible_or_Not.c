#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x,y,a;
        scanf("%d%d%d",&x,&y,&a);
        if(a<y && a>=x)
        printf("YES
");
        else
        printf("NO
");
    }
}