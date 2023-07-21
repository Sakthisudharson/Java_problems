#include<stdio.h>
int main()
{
    int n,m,i,j,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>n/2)
        {
            printf("majority element= %d",a[i]);
            break;
        }
    }
    return 0;
}
