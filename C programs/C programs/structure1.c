#include<stdio.h>
struct employee
{
    char empname[20];
    int empno;
    char empcity[20];
}e;
int main()
{
    int n;
    struct employee e[6];
    scanf("%s %d %s",&e.empname,&e.empno,&e.empcity);
    printf("%s %d %s",e.empname,e.empno,e.empcity);
    return 0;
}
