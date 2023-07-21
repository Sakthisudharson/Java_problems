import java.util.*;
class trails
{
	    public static void main(String[]args)
    {
        Scanner sc=new Scanner(System.in);
		System.out.print(x:"Enter the number");
		int num=sc.nextInt();
		int count=0;
		int result=1,i=1;
		while(i<=num)
		{
			result=i;
			while(result%5==0)
			{
				count++;
				result/=5;
			}
			i++;
		}
		System.out.println(count);
	}
}
