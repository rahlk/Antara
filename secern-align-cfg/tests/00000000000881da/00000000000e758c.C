#include<stdio.h>
//#include<conio.h>
int main()

{

	unsigned int arr[1000];
	int s,si,dim,p,q,diff,mod,T,w,turn=0,i=0,right=1,down=1;;
	char c;
	scanf("%d",&T);
	for(int t=1;t<=T;t++)
  {     
      s=0;
      printf("Case #%d: ",t);
      scanf("%d",&dim);
      scanf("%c",&c);
      scanf("%c",&c);
      int si=dim*2-2;
      char str[si];
      arr[w]=11;
      while(c!='\n')
      {
          if(c=='S')
          {
              arr[w+1]=arr[w]+10;
          }
          
          if(c=='E')
          {
              arr[w+1]=arr[w]+1;
          }
          scanf("%c",&c);
          w++;
      }
      w=0;
	
    
	diff = arr[1]-arr[0];
	if(diff==1)
		mod=10;
	else if(diff==10)
		mod=1;
	while(!((p%10)==dim || (p/10)==dim))
		{
		    p=p+mod;
		    if(mod==1)
			{
			  str[s]='E';
			  s++;
			  right++;
			}
			else if(mod==10)
			{
			  str[s]='S';
			  s++;
			  down++;
			}
		}
		    if(mod==1)
				mod=10;
			else if(mod==10)
				mod=1;
	while(p!=dim*11)
	{

		while(arr[i]<p)
		{
		i++;
		}
		while(arr[i]>p)
		{
		i--;
		}

		if(!(arr[i]==p && arr[i+1]==p+mod))
		{
			if((mod==1 && right==dim) || (mod==10 && down==dim))
			{
			   if(mod==1)
				   mod=10;
			   else if(mod==10)
				   mod=1;
			  turn = 0;
			}
			if(mod==1)
			{
				 str[s]='E';
				 s++;
			right++;
			}
			else if(mod==10)
			{
				 str[s]='S';
				 s++;
			down++;
			}
			 p=p+mod;
			 turn++;

			 while(arr[i]<p)
			{
			i++;
			}
			while(arr[i]>p)
			{
			i--;
			}
		}

	   else
		{
			if(mod==1)
			{	
			s=s-(turn+1);
			 right=right-turn;
			  down--;
			}
			else if(mod==10)
			{	
			  s=s-(turn+1);
			 down=down-turn;
			 right--;
			}
			p=p-turn*mod;
			if(mod==1)
			mod=10;
			else if(mod==10)
			      mod=1;

			p=p-mod;

			if(mod==1)
			mod=10;
			else if(mod==10)
			   mod=1;
		   turn=0;
	   }
	}
	for(q=0;q<si;q++)
	{
	    printf("%c",str[q]);
	}
	printf("\n");
  }
	
// getch();
return 0;
}