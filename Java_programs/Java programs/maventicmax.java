import java.util.Scanner;
public class maventicmax 
{
    public static void main(String[] args) 
	{
        Scanner scan = new Scanner(System.in);
        System.out.println("ENTER THE  ARRAY SIZE:");
        int n = scan.nextInt();
        //int m = scan.nextInt();
        int arr[] = new int[n];
        int i,j,k;
        int temp=0;
        int digit;
        int result;

        for ( i = 0; i < arr.length; i++) 
		{
            arr[i] = scan.nextInt();
        }

        for( i=0;i<arr.length-2;i++)
		{
            k=i+1;
            j=i+2;
            digit= (arr[i]*100)+(arr[k]*10)+(arr[j]*1);
            if(temp<digit)
			{
                temp=digit;
            }
            else 
			{
                temp=temp;
            }
        }
        System.out.println(temp);
    }
}