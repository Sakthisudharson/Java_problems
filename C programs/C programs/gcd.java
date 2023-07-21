import java.util.*;
class gcd
{
	public int gcd(int num,int num1)
	{
		if(num1==0)
		{
			return num;
		}
		else
		{
			return gcd(num1,num%num1);
		}
	}
}
class minimaxgcd
{
	public static void main(String [] args)
	{
		Scanner sc=new Scanner(System.in);
        System.out.print("Enter the number of arrays :");
        int num=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		Arrays.sort(arr);
		int a=arr[0];
		int b=arr[n-1];
		minimax sc=new minimax();
		system.out.print(sv.gcd(a,b));
	}
}
		