#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> 
#include<string.h>

 bool arr[10000][10000] = {true} ;

static bool check = false ;
char rever[100000] ;
int univ_i = 0 ;
void printmypath(bool arr[][10000],int n,int i,int j) {
    
    char d ;
    if ( i == n - 1 && j == n - 1 ) {
     
          check = true ;
          return;
    }
    
    if ( i >= n || j >= n )
        return ;
   
   
   
  if (arr[i][j+1]==false && (j+2) < n - 1 && arr[i][j+2] == true && !check && !(arr[i][j] == false && arr[i][j+1] == false) )
         printmypath(arr,n,i,j+1) ;     // move East
   if(arr[i+1][j]==false && (i+2) < n - 1 && arr[i+2][j]== true && !check && !(arr[i][j] == false && arr[i+1][j] == false))
         printmypath(arr,n,i+1,j) ;      // move south
   
    if (check == false && !(arr[i][j] == false && arr[i][j+1] == false)  ) {
   
        d = 'E' ;
    printmypath(arr,n,i,j+1) ; 
    }// move East
    if (check == false && !(arr[i][j] == false && arr[i+1][j+1] == false))  {
    d = 'S' ;
    printmypath(arr,n,i+1,j) ;
    }
    
    
     if ( check == true ) {
         rever[univ_i] = d ;
         univ_i++ ;
     }
             
    
}


void formmatrix(int n,char * Lydiapath) {
    
    int len = strlen(Lydiapath) ;
    int i = 0 ;
    int j = 0 ;
    
    

     check = false ;
     univ_i = 0 ;
    
    for ( i = 0 ; i < n ; i++)
     for ( j = 0 ; j < n ; j++)
        arr[i][j] = true;
        
        
    i = 0 ; j = 0 ;    
    for ( int inc = 0 ; inc < len ; inc++ ) {
        
        if ( Lydiapath[inc] == 'S') {
             i++ ;
             arr[i][j] = false ;
        }
        else
        {
            j++ ;
            arr[i][j] = false ;
        }
    }
    
    
    

    
      printmypath(arr,n,0,0) ;
      for( int k = univ_i - 1 ; k >= 0 ; k--)
         printf("%c",rever[k]) ;
    
}


int main() {
    
    int t ;
    int n ;
    int i = 1;
    char *Lydiapath ;
    
    scanf("%d",&t);
    
    while(t--) 
    {
        scanf("%d",&n) ;
        Lydiapath = (char *) malloc ( sizeof(char) * n) ;
        scanf("%s",Lydiapath) ;
        
        printf("Case #%d: ",i) ;
        formmatrix(n,Lydiapath) ;
        printf("\n") ;
        //free(Lydiapath) ;
        i++ ;
    }
  
}