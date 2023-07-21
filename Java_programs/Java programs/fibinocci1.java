import java.util.*;
class fibinocci1
{
public static void main(String args[])
{
Scanner sc = new Scanner(System.in);
int num = sc.nextInt();
int f1,f2,f3,i=1;
while(i<num-1)
{
f1=1;
f2=1;
f3=0;
f3=f1+f2;
f1=f2;
f3=f2;
i++;
}
System.out.println(f3);
}
}