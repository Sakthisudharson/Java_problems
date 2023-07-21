#include<stdio.h>
int sum(int n1,int n2)
{
    n1=n1*2;
    n2=n2*2;
    printf("%d %d",n1,n2);
    return 0;
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d %d",a,b);
    return 0;
}
