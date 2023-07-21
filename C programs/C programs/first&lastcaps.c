#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int len=0;
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
        if(i==0||i==(len-1))
        {
            str[i]=topper(str[i]);
        }
        else if(str[i]==" ")
        {
            str[i+1]=topper(str[i+1]);
            str[i-1]=topper(str[i-1]);
        }
    }
    printf("%s",str);
}
