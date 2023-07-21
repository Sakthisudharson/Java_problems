import java.util.*;
class monkey
{
	public static void main(String[]args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number of monkeys: ");
		int n=sc.nextInt();
		System.out.print("Enter the number of eatable bananas :");
		int k=sc.nextInt();
		System.out.print("Enter the number of eatable peanuts:");
		int j=sc.nextInt();
		System.out.print("Enter the total number of bananas :");
		int m=sc.nextInt();
		System.out.print("Enter the total number of peanuts :");
		int p=sc.nextInt();
		int temp=0,result=0,l=0,y=0;
		if(k==0 || j==0)
		{
			System.out.print("Invalid inputs");
		}
		else
		{
			temp=m/k;
			result=p/j;
			y=n-(temp+result);
			if(l>=k || l==j)
			{
				y--;
			}
			System.out.print("Remaing monkeys are:"+y);
		}
	}
}
