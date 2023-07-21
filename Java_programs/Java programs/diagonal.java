import java.util.*;
class diagonal
{
	public static void main(String[]args)
	{
		int num,i,j,sum=0,sum1=0;
		Scanner obj=new Scanner(System.in);
		num=obj.nextInt();
		int arr[][]=new int[num][num];
		for(i=0;i<num;i++)
		{
			for(j=0;j<num;j++)
			{
				if(i==j)
			    sum=sum+arr[i][j];
				if(i+j==num-1)
				sum1=sum1+arr[i][j];
			}
		}
		System.out.println("right diagonal: =" +sum);
		System.out.println("left diagonal: =" +sum1);
	}
}