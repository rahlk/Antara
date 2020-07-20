#include<stdio.h>
#include<stdlib.h>







int main() {
    
 

    int cases,i,n,j,l;
    char Lpath[40];char path[40]; char c; 
 
    scanf("%d",&cases);
    
    int d;
    for(i=1;i<=cases;i++)

    {  scanf("%d",&n);
       scanf("%s",Lpath);
       j=0; l=2*n-2; d=0;
       while(j<l-1)
        {
            if(Lpath[j]!=Lpath[j+1])
              { 
                path[d]=Lpath[j+1];
               if(path[d]=='E') c='S'; else c='E';
               d=d+1;
               for(;d<=j+1;d++) path[d]=c;
               j++;}
          j++;
         }
        
       //if(d<=l-1) {for(;d<l;d++) path[d]=Lpath[l-1];}
       printf("Case #%d: %s\n",i,path);



    }

 
      

    

    



    return 0;
   
  
}