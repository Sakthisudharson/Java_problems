#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    int i, index;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    for(i=0;str[i]!= '\0';i++)
    {
        freq[str[i]]++;
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]==1)
        {
            index=i;
            break;
        }
    }
    if(i==strlen(str))
    {
        printf("No non-repeating elements found.\n");
    }
    else
    {
        printf("The first non-repeating element in the string is %c.\n", str[index]);
    }
}
