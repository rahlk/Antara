    #include <stdio.h>
    #include <string.h>
    int t=0;
    char in_str[100000]={0};
    char out_str[100000]={0};
    unsigned int n_count=0;
    unsigned long n=0;
    int j=0,k=0;
    void find_move();
    void update_jk(int *i);
    
    int main() {
      scanf("%d",&t);
      for (int i = 1; i <= t; ++i) 
      {
        scanf("%lu",&n);
        scanf("%s",in_str);
        n_count= (2 * n) - 2;
        //printf("%s",in_str);
        find_move();
        printf("Case #%d: %s\n",i,out_str);
        n=0;
        memset(in_str,0,n_count);
        memset(out_str,0,n_count);
        n_count=0;
        j=0;
        k=0;
      }
      return 0;
    }

void find_move()
{
    char maze[1000][1000]={0};
    int i;
    int j_m=0,k_m=0;
    char first_move=in_str[0];
    char next_move;
    
    for(i=0;i<n_count;i++)
    {
        //printf("%d %d    %d %d\n",j,k,j_m,k_m);
        // Lynda tracing
        //if((j==(n-1)) && (k==(n-1)))

        // my tracing
        if((j_m==(n-1)) && (k_m==(n-1)))
            break;
        // first move    
        if((first_move=='E'))
        {
            k_m++;
            out_str[i] = 'S';
            next_move='E';
            first_move=0;
            update_jk(&i);
            continue;
        }
            
        if((first_move=='S'))
        {
            j_m++;
            out_str[i] = 'E';
            next_move='S';
            first_move=0;
            update_jk(&i);
            continue;
        }
        
        printf("BC %d:%d %d    %d %d\n",i,j,k,j_m,k_m);
        // compare with lynda 
        if((j==j_m) && (k==k_m))
        {
            // check other direction is CORNER
            if((in_str[i]=='E') && ((k_m+1)==(n-1)))
            {
                // change the previous decision
                if(next_move =='S')
                {
                    out_str[i-1] = 'E';  
                    next_move = 'E';
                    k_m--;
                }
                if(next_move =='E')
                {
                    out_str[i-1] = 'S';
                    next_move = 'S';
                    j_m--;
                }
                    
                i--;
                continue;
            }
            if((in_str[i]=='S') && ((j_m+1)==(n-1)))
            {
                // change the previous decision
                if(next_move =='S')
                {
                    out_str[i-1] = 'E';
                    next_move = 'E';
                    k_m--;
                }
                    
                if(next_move =='E')
                {
                    out_str[i-1] = 'S';
                    next_move = 'S';
                    j_m--;
                }
                    
                i--;
                continue;
            }
            
            // going other direction
            if(in_str[i]=='E')
            {
                printf("LE\n");
                k_m++;
                out_str[i] = 'S';
                next_move='E';
                update_jk(&i);
                continue;
            }
            
            // going other direction    
            if(in_str[i]=='S')
            {
                printf("LS\n");
                j_m++;
                out_str[i] = 'E';
                next_move='S';
                update_jk(&i);
                continue;
            }
                
        }
        
        //down / south corner
        if(j_m==(n-1))
        {
            printf("SC\n");
            k_m++;
            out_str[i] = 'S';
            break;
        }
        
        //right / east corner
        if(k_m==(n-1))
        {
            printf("EC\n");
            j_m++;
            out_str[i] = 'E';
            break;
        }
        
        //down / south corner -1
        if (j_m==(n-2))
        {
            printf("SC-1\n");
            k_m++;
            out_str[i] = 'S';
            next_move ='S';
            update_jk(&i);
            continue;
        }
        
        // right / east corner -1
        if (k_m==(n-2))
        {
            printf("EC-1\n");
            j_m++;
            out_str[i] = 'E';
            next_move ='E';
            update_jk(&i);
            continue;
        }
        
        if(next_move =='E')
        {
            printf("NE\n");
            j_m++;
            out_str[i] = 'E';
            update_jk(&i);
            continue;
        }
         
        if(next_move =='S')
        {
            printf("NS\n");
            k_m++;
            out_str[i] = 'S';
            update_jk(&i);
            continue;
        }     
    }
    
    out_str[i+1] = '\0';
    //printf("out = %s", out_str);
}

void update_jk(int *i)
{
    if(in_str[*i]=='E')
            j++;
    if(in_str[*i]=='S')
            k++;
}

