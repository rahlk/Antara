
using System; 

class GFG { 
	
	static int R = 4; 
	static int C = 4; 
 
	static int countPaths(int [,]maze) 
	{ 
		if (bigbox[0,0]==-1) 
			return 0; 
	
	 
		for (int i = 0; i < R; i++) 
		{ 
			if (bigbox[i,0] == 0) 
				bigbox[i,0] = 1; 
	
			 
			else
				break; 
		} 
	
		 
		for (int i =1 ; i< C ; i++) 
		{ 
			if (bigbox[0,i] == 0) 
				bigbox[0,i] = 1; 
	
			 
			else
				break; 
		} 
	
		
		for (int i = 1; i < R; i++) 
		{ 
			for (int j = 1; j <C ; j++) 
			{ 
		 
				if (bigbox[i,j] == -1) 
					continue; 
	
			 
				if (bigbox[i - 1,j] > 0) 
					bigbox[i,j] = (bigbox[i,j] + 
								bigbox[i - 1,j]); 
	
			 
				if (bigbox[i,j - 1] > 0) 
					bigbox[i,j] = (bigbox[i,j] + 
								bigbox[i,j - 1]); 
			} 
		} 
	
		 
		return (bigbox[R - 1,C - 1] > 0) ? 
			bigbox[R - 1,C - 1] : 0; 
	} 
	
 
	public static void Main () 
	{ 
		int [,]bigbox = { {0, 0, 0, 0}, 
						{0, -1, 0, 0}, 
						{-1, 0, 0, 0}, 
						{0, 0, 0, 0}}; 
						
		Console.Write (countPaths(bigbox)); 
	} 

} 

 
