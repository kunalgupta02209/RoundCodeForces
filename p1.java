import java.io.*;
import java.util.*;

public class p1
{
  public static void printhash(int n)
  {
    for(int i = 0; i < n; i ++)
     System.out.print("#");

  }
  public static void main(String [] args)
  {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int k = sc.nextInt();
    if(k < (2*(n-2)-2))
    {
      System.out.println("YES");
      for(int i = 0; i < n; i++)
        System.out.print(".");
      System.out.println("");
      int p = 0, q = 0;
      if(k%2 == 0)
        {
          p =k/2;
          q = k/2;
        }
        else
        {
          p = k/2+1;
          q = k/2;
        }
      System.out.print(".");
      printhash(p);
      for(int i = 1+p; i < n; i++)
        System.out.print(".");
      System.out.println("");
      System.out.print(".");
      printhash(q);
      for(int i = 1+q; i < n; i++)
        System.out.print(".");
      System.out.println("");
      for(int i = 0; i < n; i++)
        System.out.print(".");
      System.out.println("");
    }
    else
      System.out.println("NO");
  }
}
