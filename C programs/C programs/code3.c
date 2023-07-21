#include<stdio.h>
int main()
{
    char str[10];
    int a;
    int i,j;
    printf("Enter the input:");
    for(i=0;i<10;i++)
    {
        scanf("%c",&str[i]);
    }
    printf("Enter the range: ");
    scanf("%d",&a);
    for(j=a-1;j>=10;j--)
    {
        printf("%c",str[j]);
    }
    for(i=a;i<10;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}

