import java.util.*;
class customer
{
public static void main(String args[])
{
int input,i,c;
Scanner ns=new Scanner(System.in);
input=ns.nextInt;
int a=0,b=1;
for(i=1;i<=input;i++)
{
c=a+b;
b=a;
a=c;
}
System.out.println(a);
}
}