import java.util.*;
class circle
{
Scanner SC2=new Scanner(System.in);
void show()
{
float r,p=3.14f,Area2;
Area2=p*r*r;
System.out.print(Area2);
}
}
class rect extends circle
{
Scanner SC1=new Scanner(System.in);
void diosplay()
{
int l1,b1,Area1;
l1=SC1.nextInt();
b1=Sc1.nextInt();
Area1=l*b;
System.out.print(Area1);
}
}
class sqrt extends circle
{
Scanner SC=new Scanner(System.in);
void display1()
{
int l,Area;
l=Sc.nextInt();
Area=l*l;
System.out.print(Area);
}
}
class main
{
public static void main(String[]args)
{
sqrt obj=new sqrt();
rect my=new rect();
obj.display1();
my.display();
my.show();
obj.show();
}
}



 