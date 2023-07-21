import java.util.*;
class program1
{
public static void main(String[]args) 
{
int i,sum=0;
Scanner s = new Scanner(System.in);
int n=s.nextInt();
int[] arr=new int[n];
for(i=0;i<n;i++)
{
arr[i]=s.nextInt();
}
for(i=0;i<arr.length;i++)
{
if(i%2!=0)
{
sum=sum+arr[i];
}
}
System.out.print(sum);
}
}