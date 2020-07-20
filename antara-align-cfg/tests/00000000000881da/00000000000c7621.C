#include <stdio.h>

#include<string.h>
int main()
{
    char s[10000],t[100000];
    int n,a,b,i,k,j,no,nom,c1=0,c2=0,l,l1,l2,k1,k2;
    scanf("%d",&a);
    for(k=1;k<=a;k++)
    {
        scanf("%d",&nom);
        scanf("%s",s);
        no=strlen(s);
        for(i=0;i<no;i++){
            if(s[i]=='E'){
                c1++;}
            else if(s[i]=='S'){
                c2++;
            }
        }
        l=(2*nom)-2;
        l=l/2;
        for(i=0;i<l;i++)
        {
            if(s[i]=='E')
                l1++;
            else
                l2++;
        }
        for(i=1;i<l;i++)
        {
            if(s[i]=='E')
                k1++;
            else
                k2++;
        }
        if(l==l1||l==l2){
            for(i=0;i<no;i++)
            {
                t[i]=s[i];
            }
            if(t[0]=='E')
                t[0]='S';
            else
                t[0]='E';
            if(t[no-1]=='E')
                t[no-1]='S';
            else
                t[no-1]='E';
        }
        
        else if(k1==(l-1)||k2==(l-1)||k1==1||k2==1)
        {
            for(i=0;i<no;i++)
            {
                t[i]=s[i];
            }
            if(t[0]=='E')
                t[0]='S';
            else
                t[0]='E';
            if(t[no-1]=='E')
                t[no-1]='S';
            else
                t[no-1]='E';
           
        }
        
        
        
        else 
        {
                for(i=0;i<no;i++)
                {
                      if(s[i]=='E')
                      {
                        t[i]='S';
                        j=i+1;
                         while(s[i]=='E'&&j<no){
                                t[j]='E';
                                i++;
                                j++;
                        }
                
                      }
                      else if(s[i]=='S'){
                        t[i]='E';
                        j=i+1;
                        while(s[i]=='S'){
                            t[j]='S';
                            i++;
                             j++;
                         }
                      }
                
                    
            
                }
                
        }
         printf("Case #%d: ",k);
         for(i=0;i<no;i++)
         {
             printf("%c",t[i]);
         }

                //printf("%s",t);

                printf("\n");
                
                c1=0,c2=0,l1=0,l2=0,k1=0;k2=0;   
        
         
        
        
        
    }
    return 0;
}