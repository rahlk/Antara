import java.util.*;
import java.io.*;
public class Solution
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
        int t = sc.nextInt();
        for(int i=1;i<=t;++i)
        {
            System.out.print("Case #"+i+": ");
            int P = sc.nextInt();
            int Q = sc.nextInt();
            Q += 1;
            int ar[][] = new int[Q][Q];
            
            // Set<Pair<Integer,Integer>> set = new HashSet<Pair<Integer,Integer>>();
            // int dir[] = new int[Q];
            // List<Character> dir = new ArrayList<Character>();
            // List<Pair<Integer,Integer>> l= new ArrayList<Pair<Integer, Integer>>(); 
            // int grid[][][] = new int[Q][Q][Q];
            for(int j = 0;j<P;j++)
            {
                int x = sc.nextInt();
                int y = sc.nextInt();
                
                char c = sc.next().charAt(0);
                if(c=='N')
                {
                    y +=1;
                    for(int k = 0;k<Q;++k)
                    {
                        for(int l = y;l<Q;++l)
                            ar[k][l] +=1;
                    }
                }
                else if(c=='S')
                {
                    y -= 1;
                    for(int k=0;k<Q;++k)
                    {
                        for(int l=0;l<=y;++l)
                            ar[k][l] += 1;
                    }
                }
                else if(c=='E')
                {    
                    x += 1;
                    
                    for(int k=x;k<Q;++k)
                    {
                        for(int l=0;l<Q;++l)
                            ar[k][l] += 1;
                    }
                }
                else{
                    x -= 1;
                    for(int k=0;k<=x;++k)
                    {
                        for(int l=0;l<Q;++l)
                            ar[k][l] += 1;
                    }
                } 
                
                // l.add(new Pair(x,y));    
                // dir.add(c);
            }
            int maxX = 0,maxY=0;
            for(int j = 0;j<Q;++j)
            {
                for(int k=0;k<Q;++k)
                {
                    if(ar[j][k]>ar[maxX][maxY])
                    {
                        maxX = j;
                        maxY = k;
                    }
                }
            }
            System.out.println("Case #"+t+": "+maxX+" "+maxY);
        }
    }
}