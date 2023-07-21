import java.util.*;
class pattern3
{
public static void main(String[]args)
{
int num,i,j;
Scanner obj=new Scanner(System.in);
num=obj.nextInt();
for(i=0;i<num;i++)
{
for(j=0;j<=i;j++)
{
System.out.print("*");
}
System.out.println();
}
}
}