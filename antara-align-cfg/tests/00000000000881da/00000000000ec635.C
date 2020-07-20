#include <stdio.h>
int main(){
    long int r1,c1,r2,c2,max,moves;
    r1 =c1 = r2 = c2 = 1;
    int cs,t;
    scanf("%d",&t);
    for(int i =0; i<t;i++){
        cs = i+1;
        scanf("%ld",&max);
        moves = (max*2)-2;
        char me[moves+1];
        char op[moves];
        // gets(op);
        scanf("%s",op);
        if (op[0] == 'E')
        {
            c2++;
            me[0] = 'S';
            r1++;
        }else{
            r2++;
            me[0] = 'E';
            c1++;
        }
        for (long int j = 1; j < moves; ++j)
        {
            if ( r1 == r2 && c1 == c2 )
            {
                if (op[j] == 'E')
                {
                    c2++;
                    me[j] = 'S';
                    r1++;
                    if ((j+1) < moves && (r1<max))
                    {
                        me[j+1] = 'S';
                        r1++;
                        j++;
                        if (op[j+1] == 'E')
                        {
                            c2++;
                        }else{
                            r2++;
                        }
                    }
                }else{
                    r2++;
                    me[j] = 'E';
                    c1++;
                    if ((j+1) < moves && (c1<max))
                    {
                        me[j+1] = 'E';
                        c1++;
                        j++;
                        if (op[j+1] == 'E')
                        {
                            c2++;
                        }else{
                            r2++;
                        }
                    }
                }
            }else{
                if (op[j] == 'E')
                {
                    c2++;
                }else{
                    r2++;
                }
                if((c1+1)>max){
                    me[j] = 'S';
                    r1++;
                }else{
                    me[j] = 'E';
                    c1++;
                }

            }
            // printf("%c\n",me[j] );
        }
        me[moves] = '\0';
        printf("Case #%d: %s\n",cs,me);
    }
    return 0;
}