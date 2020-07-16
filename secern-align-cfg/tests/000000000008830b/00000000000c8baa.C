#include<stdio.h>

 struct List
{
    int numbers[100000] ;
    int size ;
} ;

struct Decoded
{
    int numbers[1000] ;
    int size ;
} ;

struct Used
{
    int numbers[27] ;
    int size ;
} ;


int main()
{
    int test ;
    scanf("%d",&test) ;
    int base =65 ;
    int tl=0 ;
    
    for(;tl<test;++tl)
    {
        int N ; int L ;
        scanf("%d",&N) ;
        scanf("%d",&L) ;
        int array[100] ;
        int i=0 ;
        
        
        
        for(;i<L;++i)
        {
            scanf("%d",&array[i]) ;
        }
        
        
        int number=3 ;
        
        struct List l ;
       // l.numbers[0]=2 ;
        //l.size=1 ;
        
        int var=3 ;
        
        
        //  Prime counter
        l.numbers[l.size] = 2 ;
        l.size=1  ;
        for(i=3;i<=N;++i)
        {
            int k ;
            int isP = 1 ;
            for(k=2;k<i;++k)
            {
                if(i%k==0)
                {
                    isP = 0 ;
                    break ;
                }
            }
            
            if(isP==1)
            {
                l.numbers[l.size] = i ;
                l.size++ ;
            }
            
        }
        
        
        for(i=0;i<l.size;++i)
        {
            if( array[0]%l.numbers[i] == 0)
            {
                break ;
            }
        }
        
        struct Decoded pt ;
        pt.size=0 ;
        struct Used code ;
        code.size = 0 ;
        int current ;
        
        if(array[1]%l.numbers[i] == 0)
        {
            current  = l.numbers[i] ;
            int first = array[0]/current ;
            pt.numbers[pt.size] = first ;
            pt.size++ ;
            code.numbers[code.size] = first ;
            code.size++ ;
        }
        else
        {
            current = array[0]/l.numbers[i] ;
            pt.numbers[pt.size] = l.numbers[i] ;
            pt.size++ ;
            code.numbers[code.size] = l.numbers[i] ;
            code.size++ ;
        }
        
        int j=0 ;
        
        for(i=1;i<L;++i)
        {
        //    printf("yugg") ;
            pt.numbers[pt.size] = current ;
            pt.size++ ;
      //      printf("%d",i) ;
           // int j=0 ;
            
            for(j=0;j<=code.size;++j)
            {
                if(j==code.size)
                {
                    code.numbers[code.size] = current ;
                    code.size++ ;
                    break ;
                }
                else
                {
                    if(current==code.numbers[j])
                    {
                        break ;
                    }
                }
            }
            
            current = array[i]/current ;
        }
        
    //    printf("two\n") ;
        
    //    int j=0 ;
        
        pt.numbers[pt.size] = current ;
        pt.size++ ;
        
        for(j=0;j<=code.size;++j)
        {
            if(j==code.size)
            {
                code.numbers[code.size] = current ;
                code.size++ ;
                break ;
            }
            else
            {
                if(current==code.numbers[j])
                {
                    break ;
                }
            }
        }
        
        
        // sorting
        for(i=0;i<25;++i)
        {
            for(j=i+1;j<26;++j)
            {
                if( code.numbers[i]> code.numbers[j])
                {
                    int temp = code.numbers[i] ;
                    code.numbers[i] = code.numbers[j] ;
                    code.numbers[j] = temp ;
                }
            }
        }
        
        
        printf("Case #%d: ",tl+1) ;
        
        
        for(i=0;i<=L;++i)
        {
            int rank ;
            for(rank=0;rank<26;++rank)
            {
                if( code.numbers[rank] == pt.numbers[i] )
                {
                    break ;
                }
            }
            
            char ch=(char)(base + rank) ;
            printf("%c",ch) ;
        }
        
        printf("\n") ;
        
        
    }
}
