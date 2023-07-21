#include<stdio.h>
int main()
{
    int n,m,i,j,k;
    scanf("%d",&n);
    scanf("%d",&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("element found");
            break;
        }
    }
    return 0;
}
