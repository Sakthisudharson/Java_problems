#include<stdio.h>
int sum(int n1,int n2)
{
    int n3=n1+n2;
    return n3;
}
int main()
{
    int a,b,c=0;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",sum(a,b));
}
