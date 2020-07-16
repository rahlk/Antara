#include<stdio.h>
int main(){
    long t;
    scanf("%ld",&t);
    for(int z=1;z<=t;z++)
    {
        long n;
        scanf("%ld",&n);
        long smoves, emoves;
        smoves=n-1;
        emoves = n-1;
        long curs =0,cure=0,uskas=0,uskae=0;
        long totalMoves = 2*n-1;
        char uskamoves[totalMoves];
        char curmoves[totalMoves];
        scanf("%s",uskamoves);
        char uskaLastMove = uskamoves[2*n-3];
        //printf("%c",uskaLastMove);
        long k;
        for( k=0;k<totalMoves-1;k++)
        {
            if((curs==uskas) && (cure==uskae))
            {
                if(uskamoves[k]=='s')
                {
                    uskas++;
                    curmoves[k]='e';
                    cure++;
                }
                else
                {
                    uskae++;
                    curmoves[k]='s';
                    curs++;
                }
                
            }
            else
            {
                if(uskamoves[k]=='s')
                {
                    uskas++;
                }
                else
                {
                    uskae++;
                }
                
                if(uskaLastMove=='s')
                {
                    if(curs<smoves)
                    {
                        curmoves[k]='s';
                        curs++;
                    }
                    else
                    {
                        curmoves[k]='e';
                        cure++;
                    }
                    
                }
                else
                {
                    if(cure<emoves)
                    {
                        curmoves[k]='e';
                        cure++;
                    }
                    else
                    {
                        curmoves[k]='s';
                        curs++;
                    }    
                }
                
            }
            
        }
        curmoves[k]='\0';
        printf("Case #%ld: %s\n",z,curmoves);
    }
}
