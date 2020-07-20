#include<stdio.h>
#include<stdlib.h>



void deviseInt(int n, int *t, int *taille){
    
   int i,x; *taille=0; int ta[6];
    do{
        t[*taille]=n%10;
        n=n/10;
        *taille = *taille+1;
    }
    while(n!=0);
    
   for(i=0;i<*taille/2;i++)
     { x = t[i];
     t[i]=t[*taille-i-1];
     t[*taille-i-1] = x;}
}

    
int verif4(int *t, int taille)
{  int i;
   for(i=0;i<taille;i++)
    if (t[i]==4) return 1;

   return 0;
}




int main() {
    
 

    int cases,i,n,x,j,taille, t1[6],t2[6];
    scanf("%d",&cases);
    
    for(i=1;i<=cases;i++)

    {
       scanf("%d",&n);
       x=n;j=0;
       while(1){
       j++;
       x=n-j; 
       deviseInt(x,t1,&taille);
       if(!verif4(t1,taille))
           {
              deviseInt(j,t2,&taille);
              if(!verif4(t2,taille)) break;
           }

       }
       printf("Case #%d: %d %d\n",i,x,j);



    }

 
      

    

    



    
   return 0;
  
}