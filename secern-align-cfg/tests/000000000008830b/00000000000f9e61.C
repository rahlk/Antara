import java.math.BigInteger; 
import java.util.*; 
 
//public class Solution 
public class Main 
{ 
 
 
    // Driver method 
    public static void main(String args[]) throws Exception 
    { 
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int uu = 1; uu <= t; uu++){
            int n = sc.nextInt(), l = sc.nextInt();
            ArrayList<BigInteger> al = new ArrayList<BigInteger>();
            BigInteger prev= null, first = null; 
            for(int i =0 ; i < l; i++){
                BigInteger bi = sc.nextBigInteger();
                if(prev != null){
                    BigInteger gcdbi = bi.gcd(prev);
                    al.add(gcdbi);
                }else{
                    first = bi;
                }
                prev = bi;
            }
            al.add(0, first.divide(al.get(0)));
            al.add(prev.divide(al.get(al.size()-1)));
            ArrayList<BigInteger> orig = new ArrayList<BigInteger>(al);
            Collections.sort(al);
            Integer cnt =0;
            HashMap<BigInteger, Integer> mp = new HashMap<BigInteger, Integer>();
            for(int i =0 ; i < al.size(); i++){
                if(i == 0 || al.get(i-1) != al.get(i)){
                    mp.put(al.get(i), cnt++);
                    System.out.println(cnt);
                }
            }
            String st = "";
            for(int i = 0; i < orig.size();i++){
                st += (char)('A' + mp.get(orig.get(i)));
            }
            System.out.println("Case #" + uu + ": " + st);
 
        }
 
    } 
}