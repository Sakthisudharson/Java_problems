import java.util.*;
class rough
{
	public static void main(String arg[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the elements:");
		String a=sc.nextLine();
		char[]b=a.toCharArray();
		int size=b.length;
		int i,sum=0;
		for(i=0;i<size;i++)
		{
			if(b[i]>='0' && b[i]<='9')
			{
				sum+=b[i]-48;
			}
		}
		System.out.println(sum);
	}
}
