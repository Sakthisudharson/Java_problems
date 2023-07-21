#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int min=i;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                min=j;
            }
        }
    }
    if(i!=min)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("%d",a[i]);
}
