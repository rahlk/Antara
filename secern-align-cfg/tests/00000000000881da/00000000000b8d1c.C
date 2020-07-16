    #include <stdio.h>
    #include <math.h>
    #include <string.h>
    int t=0;
    char in_str[100000]={0};
    char out_str[100000]={0};
    unsigned int n_count=0;
    unsigned long n=0;
    void find_move();
    
    int main() {
      scanf("%d",&t);
      for (int i = 1; i <= t; ++i) 
      {
        scanf("%lu",&n);
        scanf("%s",in_str);
        n_count= (2 * n) - 2;
        //printf("%s",in_str);
        printf("Case #%d: %s\n",i,out_str);
        n=0;
        memset(in_str,0,n_count);
        memset(out_str,0,n_count);
        n_count=0;
      }
      return 0;
    }

void find_move()
{
    char maze[1000][1000]={0};
    int i,j=0,k=0;
    int j_m=0,k_m=0;
    char first_move=in_str[0];
    char next_move;
    
    for(i=0;i<n_count;i++)
    {
        // Lynda tracing
        //if((j==(n-1)) && (k==(n-1)))
        if(in_str[i]=='E')
            j++;
        if(in_str[i]=='S')
            k++;
        // my tracing
        if((j_m==(n-1)) && (k_m==(n-1)))
            break;
        if(first_move=='E')
        {
            k_m++;
            out_str[i] = 'S';
            next_move='E';
            first_move=0;
            continue;
        }
            
        if(first_move=='S')
        {
            j_m++;
            out_str[i] = 'E';
            next_move='S';
            first_move=0;
            continue;
        }
        
        if((j==j_m) && (k==k_m))
        {
            // going other direction
            if(in_str[i+1]=='E')
            {
                k_m++;
                out_str[i] = 'S';
                next_move='E';
                continue;
            }
                
            if(in_str[i+1]=='S')
            {
                j_m++;
                out_str[i] = 'E';
                next_move='S';
                continue;
            }
                
        }
        
        if(next_move =='E')
        {
            j_m++;
            out_str[i] = 'E';
            continue;
        }
         
        if(next_move =='S')
        {
            k_m++;
            out_str[i] = 'S';
            continue;
        }       
    }
    
    out_str[i] = '\0';
    printf("out = %s", out_str);
}