#include<stdio.h>
int sum(int a,int b)
{
    int c;
    a=a+5;
    b=b+5;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
    printf("the value of a: %d\nthe value of b: %d",a,b);
}
