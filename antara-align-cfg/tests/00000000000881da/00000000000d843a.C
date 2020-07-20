#include<stdio.h>
#include<string.h>
#define NmaX 1001
//int Mark[2*NmaX-1] ;
//int Oppo[2*NmaX-1] ;
struct Stack
{
    int array[5000][3] ;
    int size ;
} ;
struct Path
{
    char p[5000] ;
    int size ;
} ;
int main()
{
    int test ;
    char ch[2*NmaX-1] ;
    scanf("%d",&test) ;
    int tl=1 ;
    int N ;
    
    
    for(tl=1;tl<=test;++tl)
    {
        int  Mark[NmaX][NmaX] ;
        char  Oppo[NmaX][NmaX] ;
        scanf("%d",&N) ;
        scanf("%s",ch) ;
        
        
        
        int i=1 ;
        int j=1 ;
        
       
        for(i=1;i<=N;++i)
        {
            for(j=1;j<=N;++j)
            {
                Mark[i][j]=0  ;
                Oppo[i][j]='N' ;
            }
        }
        
        
        
        int x=1,y=1 ;
        for(i=0;ch[i]!='\0';++i)
        {
            if(ch[i]=='S')
            {
                Oppo[x][y] = 'S' ;
                y++ ;
            }
            else
            {
                Oppo[x][y] = 'E' ;
                x++ ;
            }
        }
        for(i=1;i<=N;++i)
        {
            for(j=1;j<=N;++j)
            {
       //         printf(" i %d  j %d  point %c\n",i,j,Oppo[i][j] ) ;
            }
        }
        struct Stack stack ;
        stack.size = 0 ;
        struct Path way ;
        
        
        x=y=1 ;
        int conti = 1 ;
        
        stack.array[0][0] = 1 ;
        stack.array[0][1] = 1 ;
        stack.array[0][2] = 1 ;
        stack.size++ ;
        
        way.p[0]='F' ;
        way.size = 1 ;
        
        while(conti ==1 )
        {
            
            int x=stack.array[stack.size-1][0] ;
            int y=stack.array[stack.size-1][1] ;
            int d=stack.array[stack.size-1][2] ;
     //       printf("x %d  y %d  d  %d\n",x,y,d) ;
            if( x==N && y==N )
            {
              //  printf("one\n") ;
                char last ;
                if( stack.array[stack.size-1][2]==2)
                {
                    way.p[way.size] = 'E' ;
                    way.size++ ;
                }
                else
                {
                    way.p[way.size] = 'S' ;
                    way.size++ ;
                }
                break ;
            }
            else
            {
                
                if( Mark[x][y] == 0  )
                {
                    
                    
                 //   printf("two\n") ;
                    if(y<N && Oppo[x][y]!='S')
                    {
              //          printf("three\n") ;
                        stack.array[stack.size][0] = x ;
                        stack.array[stack.size][1] = y+1 ;
                        stack.array[stack.size][2] = 3 ;
                        stack.size = stack.size + 1 ;
                    }
                
                    if(x<N && Oppo[x][y]!='E')
                    {
            //            printf("four\n") ;
                        stack.array[stack.size][0] = x+1 ;
                        stack.array[stack.size][1] = y ;
                        stack.array[stack.size][2] = 2 ;
                        stack.size ++ ;
                    }
                
                    if(  !  (x==1 && y==1) )
                    {
               //         printf("five\n") ;
                        char in ;
                        if(d==2)
                        {
               //             printf("six\n") ;
                            in= 'E' ;
                        }
                        else
                        {
             //               printf("seven\n") ;
                            in='S' ;
                        }
                        way.p[way.size] = in ;
                        way.size++ ;
                    }
                    Mark[x][y] = 1 ;
                }
                else
                {
            //        printf("eigth\n") ;
                    stack.size-- ;
                    way.size -- ;
                }
            }
        }
        
        
        int k=1 ;
     //   printf("aa %d ea",way.size) ;
        printf("Case #%d: ",tl)  ;
        for(k=1;k<=way.size;++k)
        {
            printf("%c",way.p[k]) ;
        }
        printf("\n") ;
        
    }
}
