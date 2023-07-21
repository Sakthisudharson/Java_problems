import java.util.*;
class triplet
{
 public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
System.out.println("\n Enter the size of array :");
int num=sc.nextInt();
System.out.println("\n Enter array");
int arr[]=new int[num];
for(int i=0;i<num;i++)
{
 arr[i]=sc.nextInt();
}
int count=0;
for(int i=0;i<num;i++)
{
for(int j=i+1;j<num;j++)
{
 for(int k=0;k<num;k++)
 {
  if(arr[i]+arr[j]==arr[k])
   {
     count++;
   }
}
}
}
System.out.println("Enter the no of triplets "+count);
}
}
