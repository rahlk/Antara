import java.util.*;
import java.io.*;
public class Solution
{
  public static void main(String[] args) 
  {
     Scanner sc = new Scanner(System.in);
     int t = sc.nextInt(); // Scanner has functions to read ints, longs, strings, chars, etc.
     for(int i=0;i<t;i++)
       {
        //   int n = in.nextInt();
        //   int m = in.nextInt();
        //   System.out.println("Case #" + i + ": " + (n + m) + " " + (n * m));
        
        int a=sc.nextInt();
        int b=sc.nextInt();
        
        int ar1[]=new int[a];
        int ar2[]=new int[b];
        
        int f1[]=new int[b+1];
        int f2[]=new int[b+1];
        Arrays.fill(f1,0);
        Arrays.fill(f2,0);
        char d;
        // int k=a;
        // while(k--!=0)
        for(int k=0;k<a;k++)
        {
            ar1[i]=sc.nextInt();
            ar2[i]=sc.nextInt();
            d=sc.next().charAt(0);
            
            if(d=='N' && ar2[i]<b)
            f2[ar2[i]+1]++;
            
            if(d=='W' && ar1[i]>0)
            f1[ar1[i]-1]++;
            
            if(d=='E' && ar1[i]<b)
            f1[ar1[i]+1]++;
            
            if(d=='S' && ar2[i]>0)
            f2[ar2[i]-1]++;
        }
        
        int mx=0,my=0,ax=0,ay=0;
        // int p=b;
        // //for(int p=0;p<=b;p++)
        // while(p--!=0)
        for(int p=0;p<b;p++)
        {
            if(f1[p]>mx)
            {
                ax=p;
                mx=f1[p];
            }
            
            if(f2[p]>my)
            {
                ay=p;
                my=f2[p];
            }
        }
        System.out.println("Case #"+(i+1)+":"+" "+ax+" "+ay);
       }
       return 0;
    }
}