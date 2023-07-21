#include<stdio.h>
int main()
{
    int n,first,last,mid,search;
    scanf("%d",&n);
    int a[n];
    first=0;
    last=n-1;
    mid=first+last/2;
    for(i)
    if(search>a[mid])
    {
        first=mid+1;
    }
    else if(search==a[mid])
    {
        printf("Element found at mid");
    }
    else
    {
        last=mid-1;
    }
    mid=first+last/2;
    return 0;
}
