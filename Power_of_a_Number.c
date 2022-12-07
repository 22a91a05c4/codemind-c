#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,g,s;
    scanf("%d%d%d",&a,&b,&c);
    g=pow((a),b);
    s=g%c;
    printf("%d",s);
}