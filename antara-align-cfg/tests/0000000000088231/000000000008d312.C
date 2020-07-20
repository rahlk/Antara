int main(){
    int t,k=1,count=0,x=2;
    long int n,i,j;
    long int n1, n2;
    scanf("%d",&t);
    while(t){
        scanf("%ld",&n);
        //printf("%ld",n);
        x=2;
        count=0;
        while(x<=9){
            count=0;
            j=n/x;
            //printf("%ld",j);
            while(j>0){
                i=j%10;
                j=j/10;
                if(i==4){
                   count=1;
                   break;
                }
             }
            if(count==1)
                x++;
            else{
                n1= n/x;
                n2 = n-n1;
                //printf("%ld",n1);
                break;
            } 
        }
        
        
        
        printf("Case #%d: %ld %ld\n",k,n1,n2);
        k++;
        t--;
    }
    
return 0;   
}