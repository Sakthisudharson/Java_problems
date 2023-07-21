#include<stdio.h>
int main()
{
    int arr[100],size;
    int i;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    if(increase(arr,size)||decrease(arr,size))
    {
        printf("Monotonic");
    }
    else
    {
        printf("Not");
    }
    return 0;
}
