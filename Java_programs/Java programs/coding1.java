import java.util.*;
class coding1
{
public static void main(String[]args)
{
Scanner in=new Scanner(System.in);
int arr[][]=new int[4][4];        
System.out.println("Enter elements of 4x4 matrix ");
for(int i=0;i<4;i++)
{
System.out.println("row :");
for(int j=0;j<4;j++)
{
arr[i][j]=in.nextInt();
}
}
for(int i=0;i<4;i++) 
{
for(int j=0;j<4;j++)
{
System.out.print(arr[i][j] + "\t");
}
System.out.println();
}
}
}


