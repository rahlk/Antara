#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h> 
#include<string.h>

 void formmatrix(int n,char * Lydiapath) {
     int len = strlen(Lydiapath) ;
     
     for ( int i = 0 ; i < len ; i++)
        if ( Lydiapath[i] == 'E'  )
           printf("S") ;
        else if  ( Lydiapath[i] == 'S'  )
             printf("E") ;
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