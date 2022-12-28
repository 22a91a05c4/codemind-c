#include<stdio.h>
int main()
{
 int a,i,j;
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {
   int x,y;
   scanf("%d%d",&x,&y);
   if(x>y)
   printf("LOSS
");
   else if(x<y)
   printf("PROFIT
");
   else if(x==y)
   printf("NEUTRAL
");
 }
} 
