#include<stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   while(n++)
   {
       int a,b;
       scanf("%d %d",&a,&b);
       if(a>0 && b>a)
       {
           printf("YES");
       }
       else if(a<b)
       {
           printf("NO");
       }
       else if(b<a)
       {
           printf("YES");
       }
   }
   return 0;
}
