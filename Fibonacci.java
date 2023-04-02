import java.util.*;
public class Fibonacci
{
    public static void main(String[] args)
    {
        int a=0;
        int b=1;
        int x;        
        Scanner in=new Scanner(System.in);
        System.out.println("Enter the limit");
        int n= in.nextInt();
        System.out.println();
        System.out.println(a+"\n"+b);
        int i=0;
        while(i<n)
        {
           x=a+b;
           a=b;
           b=x;
           System.out.println(x);
           i++; 
        }
           
    }
}