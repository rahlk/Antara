#include<stdio.h>

int
check_4 (long int N)
{
  int flag = 0;
  while (N)
    {
      int ch = N % 10;
      if (ch == 4)
	{
	  flag++;
	}
      N /= 10;
    }
  return flag;
}

void
main ()
{
  long int N;
  int no = 1, cno;

  do
    {
      printf ("\n \t\t Enter no of cases : ");
      scanf ("%d", &cno);
    }
  while (cno <= 0 || cno > 100);

  do
    {
      int noof4 = 0, flag = 0, A = 0, B = 0;
      do
	{
	  printf ("\n \t\t Enter the number : ");
	  scanf ("%ld", &N);
	  noof4 = check_4 (N);
	}
      while (!noof4);

      int a, b;
      a = b = N / 2;
      if (N % 2)
	{
	  b++;
	}

      while (1)
	{
	  if (!check_4 (a))
	    {
	      if (!check_4 (b))
		{
		  A = a;
		  B = b;
		  break;
		}
	    }
	  a--;
	  b++;

	}

      printf (" \t\t Case #%d : %d %d \n", no, A, B);
      no++;
    }
  while (no <= cno);
}
