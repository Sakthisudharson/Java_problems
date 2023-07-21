import java.util.*;
class modulo
{
public static void main(String[]args)
{
Scanner obj=new Scanner(System.in);
int num,i;
num=obj.nextInt();
int sum[]=new int[num];
int[] A=new int[num];
int[] B=new int[num];
for(i=0;i<num;i++)
{
A[i]=obj.nextInt();
}
for(i=0;i<num;i++)
{
B[i]=obj.nextInt();
}
for(i=0;i<num;i++)
{
sum[i]=A[i]+B[num-0-i];
}
for(i=0;i<num;i++)
{
System.out.print(sum[i] + " ");
}
}
}