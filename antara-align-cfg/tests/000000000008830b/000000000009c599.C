#include<stdio.h>
void main()
{
    int a[26],j,n,i,count,k,c;
    char c[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char text[];
    for(k=0;k<26;k++){
        a[k]=int n, i = 3, count, c;
 
   n=26;
 
   if ( n >= 1 )
   {
      printf("First %d prime numbers are :\n",n);
      printf("2\n");
   }
 
   for ( count = 2 ; count <= n ;  )
   {
      for ( c = 2 ; c <= i - 1 ; c++ )
      {
         if ( i%c == 0 )
            break;
      }
      if ( c == i )
      {
         a[k]=i;
         count++;
      }
      i++;
   }
    }
    printf("enter the text \n");
    gets(text);
    k=0;
    while(text[i]!='/0')
    {
        if(text[i]==' ')
        {
            printf(" ");
        }
        while(text[i]!=c[j])
        {
            
            k=a[j]*k;
            j++;
        }
        printf("%d",k);
        i++;
    }
}