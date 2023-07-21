#include<stdio.h>
int main()
{
    int n,i,j,k=0,b[n],count,sum=0;
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        for(j=2;j<=n/2;j++)
        {
            if(i%j==0)
            {
                count=1;
            }
            if(count!=1)
            {
                b[k]=i;
                k++;
            }
            for(i=0;i<=k;i++)
            {
                sum=sum+b[i];
                if(sum==n)
                {
                    break;
                }
                else
                {
                    count++;
                }
                printf("%d", count);
            }
        }
    }
}
