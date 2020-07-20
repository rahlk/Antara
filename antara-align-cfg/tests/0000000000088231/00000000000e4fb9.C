#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int f=0;

  struct T                         //no. of test cases
   {
     long int N;
    } ;


   void digitcheck(long int i)    // checking the digit 4
      { f=0;
	long int j;
	 while(i!=0)

	  { j=i%10;
		if(j==4)
		{
		 f=1;
		 return;
		}
		else
		i=i/10;
	  }  return;

      }

   void select(long int y)     //selecting a and b
   {long int m,n;
	for(m=random(y/2);m<y;m++)
	 {     n=y-m;
		digitcheck(m);
		 if(f==0)
		  digitcheck(n);
		    if(f==0)
		     { cout<<"\n1st no:"<<m<<"\n2nd noo."<<n;

		     return;}

	 }

  }
  void ans(long int h)
  {//check about 4 is present
   digitcheck(h);
   if(f==1)
   select(h);// send to find the a and b
   else
   cout<<"Wrong jam coins entry";

  }




 void main()
{       clrscr(); int v;
cout<<"Select the  test case 1/2"   ;
cin>>v;
cout<<"\n\t\t\tTEST CASE"<<v;


 unsigned int q,w;
  struct T c[100];
cout<< "\nEnter the no. of test cases you want to have  :";
cin>>q;
   if(q<1||q>100)
    {
     cout<<"The test case entry is beyond limits specified of 1 to 100\nTry again";   //check it dont exceeds 100
     goto k;
    }
     for(w=1;w<=q;w++)
     { p: cout<<"\n No. of jamcoins for test case #"<<w<<"  :";
	cin>>c[w].N;
       if(v==1)
	if(c[w].N<=1||c[w].N>=100000)
	{cout<<"The value entered  are off the test set"<<v<<"\n Please re enter";
	goto p;}
      if(v==2)
       if(c[w].N<=1||c[w].N>=pow(10,9))
       {	cout<<"The value entered is off the test set"<<v<<"\n Please re enter";
	goto p;}

       ans(c[w].N);
	 }

  k: getch();
  }