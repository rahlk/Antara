#include <stdio.h>
#include <stdlib.h>
int T,P,Q,x,y;

int main()
{
    scanf("%d",&T);
    for(int i=0;i<T;i++){
            x=0; y=0;
        scanf("%d %d",&P ,&Q);
        int tabX[P],tabY[P];
        char dir[P];
         for(int i=0;i<P;i++){
                scanf("%d %d %c",&tabX[i],&tabY[i],&dir[i]);
         }
        for(int i=0;i<P;i++){
         if(dir[i]=='N'){
                if (y<tabY[i]+1){y=tabY[i]+1;
                }
         }
                 if(dir[i]=='S'){
                if (y>tabY[i]-1){y=tabY[i]-1;
                }
            }
         if(dir[i]=='E'){
                if (x<tabX[i]+1){x=tabX[i]+1;
                }
        }
                 if(dir[i]=='W'){
                if (x>tabX[i]-1){x=tabX[i]-1;
                }
            }
        }
            printf("Case %d: %d %d\n",i+1,x,y);
        }







    return 0;
}
