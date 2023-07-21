#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements for the array\n");
    for (int i=0;i<n;i++)
    {
        printf("Enter element %d: ",i);
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are: ");
    for (int i= 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
        int temp[n];
    for(int i=0;i<n;i++)
    temp[i] = arr[i];
     for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x = temp[i];
            temp[i] = temp[j];
            temp[j] = x;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(temp[j]==arr[i])
            {
                arr[i]=j+1;
            }
        }
    }
    for(int i=0;i<n;i++)
    printf("\n %d ", arr[i]);
}
