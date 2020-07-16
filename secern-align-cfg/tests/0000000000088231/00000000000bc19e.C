import java.util.*;

class ForGoneSolutionGoogle 
{
	public static void main(String ss[])
	{
		Scanner o = new Scanner(System.in);
		
		int t = o.nextInt();
				
		int i=1;
		
		while(t!=0)
		{
			int n = o.nextInt();
			
			int x,j=0,y=n;

			double a=0,b=0;
			
			while(n!=0)
			{
				x = n%10;
				if(x == 4)
				{
					b = b + Math.pow(10,j);
					j++;
				}
				
				else
					j++;
				
				n = n/10;
				
			}
			
			System.out.println("Case #"+i+":"+" "+(int)b+" "+(int)(y-b));
			
			i++;
			t--;
		}
	}
}