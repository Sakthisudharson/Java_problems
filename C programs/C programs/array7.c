#include<stdio.h>
int main()
{
    int n,temp,mid;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int search=5;
    mid=n/2;
    for(i=0;i<n;i++)
    {
        if(search==a[mid])
        {
            printf("%d element found",a[mid]);
        }
    }

}
