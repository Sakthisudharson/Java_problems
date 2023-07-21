#include<stdio.h>
int main()
{
    int n,m,i,k,r=0,g;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        k=r*10;
        r=k+a[i];
    }
    printf("%d",r);
    scanf("\n%d",&g);
    m=r+g;
    printf("%d",m);
    return 0;
}
