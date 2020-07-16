#include <stdio.h>

#include<string.h>
int main()
{
    char s[10000],t[100000];
    int n,a,b,i,k,j,no,nom,c1=0,c2=0;
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
        if(c1==c2&&c1==nom-1&&c2==nom-1){
        for(i=0;i<no;i++)
        {
            if(s[i]=='E'){
                t[i]='S';
                j=i+1;
                while(s[i]=='E'){
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
         printf("Case #%d: ",k);

    printf("%s",t);

    printf("\n");
        c1=0,c2=0;
        }
            
        
         
        
        
        
    }
    return 0;
}