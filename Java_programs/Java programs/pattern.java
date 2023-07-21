import java.util.*;
class pattern
{
public static void main(String[]args)
{
int i,j,s,n=5;
for(i=0;i<n;i++)
{
for(s=0;s<n-i-1;i++)
{
System.out.print(" ");
}
for(j=0;j<n-s;j++)
{
System.out.print("*");
}
System.out.print("\n");
}
}
}
