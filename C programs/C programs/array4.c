#include<stdio.h>
int main()
{
    int n,j,m,i,l=1,k=2;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        n=n*n;
        m--;
    }
    printf("%d",n);
    for(i=0;i<k;i++)
    {
        l=l*10;
    }
    j=n%l;
    printf("\n%d",j);
    return 0;
}
