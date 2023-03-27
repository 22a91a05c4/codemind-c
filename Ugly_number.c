#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0 || a%3==0 || a%5==0)
    printf("Ugly Number");
    else 
    printf("Not Ugly Number");
}
