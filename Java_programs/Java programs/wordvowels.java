import java.util.*;
class wordvowels
{
public static void main(String[]args)
{
Scanner sc=new Scanner(System.in);
System.out.print("enter the sentence:");
String sentence=sc.nextLine();
String[]words=sentence.split(" ");
int totalvowels=0;
for(String word:words)
{
int vowelCount=0;
for(int i=0;i<word.length();i++)
{
char ch=word.charAt(i);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
{
vowelCount++;
totalvowels++;
}
}
System.out.println("Word:"+words+"vowel Count:"+vowelCount);
}
System.out.println("total vowels:"+totalvowels);
}
}