#include<stdio.h>

 struct List
{
    long long int numbers[1000000] ;
    long int size ;
} ;

struct Decoded
{
   long long  int numbers[1000] ;
    int size ;
} ;

struct Used
{
   long long int numbers[27] ;
    int size ;
} ;


int main()
{
    
    char alph[26]={ 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'} ;
    
    int test ;
    scanf("%d",&test) ;
    int base =65 ;
    int tl=0 ;
    
    for(;tl<test;++tl)
    {
       long long int N ;long long  int L ;
        scanf("%lld",&N) ;
        scanf("%lld",&L) ;
        long long int array[100] ;
        
        int i=0 ;
    
        for(;i<L;++i)
        {
            scanf("%lld",&array[i]) ;
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
            
            //rank++ ;
            char ch=alph[rank] ;
            /*
            if(rank==0) { ch='A' ; }
            else if(rank==1)  {ch='B' ; }
            else if(rank==2)  {ch='C' ;}
            else if(rank==3)  {ch='D' ;}
            else if(rank==4)  {ch='E' ;}
            else if(rank==5)  {ch='F' ;}
            else if(rank==6) { ch='G' ;}
            else if(rank==7)  {ch='H' ;}
            else if(rank==8)  {ch='I' ;}
            else if(rank==9)  {ch='J' ;}
            else if(rank==10)  {ch='K' ;}
            else if(rank==11)  {ch='L' ;}
            else if(rank==12)  {ch='M' ;}
            else if(rank==13)  {ch='N' ;}
            else if(rank==14)  {ch='O' ;}
            else if(rank==15)  {ch='P' ;}
            else if(rank==16)  {ch='Q' ;}
            else if(rank==17)  {ch='R' ;}
            else if(rank==18)  {ch='S' ;}
            else if(rank==19)   {ch='T' ;}
            else if(rank==20)  {ch='U' ;}
            else if(rank==21)  {ch='V' ;}
            else if(rank==22)  {ch='W' ;}
            else if(rank==23)  {ch='X' ;}
            else if(rank==24) { ch='Y' ;}
             else  {ch='Z' ;}
            */
            printf("%c",ch) ;
        }
        
        printf("\n") ;
        
        
    }
}
