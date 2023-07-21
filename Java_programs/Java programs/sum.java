import java.util.*;
class sum
{
	public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter the array size :");
        int n=sc.nextInt();
        int arr[]=new int[n];
        System.out.print("Enter the array:");
        for(int i=0;i<n;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.print("Enter the target value:");
        int target=sc.nextInt();
        int result=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]+arr[j]==target)
                {
                    result=1;
                    break;
                }
            }
        }
        if(result==1)
		{
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }
}