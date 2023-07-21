#include<stdio.h>
int sum(int *a,int *b)
{
    *a = *a+5;
    *b = *b+5;
    printf("%d\n",*a);
    printf("%d\n",*b);
}
int main()
{
    int a,b,*a1,*b1;
    scanf("%d",&a);
    scanf("%d",&b);
    a1=&a;
    b1=&b;
    printf("the value of a: &d\n the value of b: &d",a1,b1);
    sum(a1,b1);
    printf("the value of a: %d\nthe value of b: %d",a,b);
}
