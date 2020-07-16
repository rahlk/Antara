#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    int i;
    for(i=1;i<=t;i++)
    {
        char n[10];
        scanf("%s",n);
        int l=strlen(n);
        int j;
        long long int a=0,b=0,aa=1,bb=1;
        for(j=l-1;j>=0;j--){
            if(n[j]=='4'){
                a=a+aa*(((int)(n[j])-(int)('0'))-1);
                b=b+bb*1;
                aa*=10;
                bb*=10;
            }
            else if(n[j]=='0'&&n[j-1]=='1'&&j==1){
                a=a+aa*5;
                b=b+bb*5;
            
                break;
            }
            else if((n[j+1]=='0'&&j==0)||(l==1)){
                if(n[j]=='5'){
                    a=a+aa*3;
                    b=b+bb*2;
                    aa*=10;
                    bb*=10;
                }
                else{
                    a=a+aa*((int)(n[j])-(int)('1'));
                    b=b+bb*1;
                    aa*=10;
                    bb*=10;
                }
            }
            else if(j==0)
            {
                if(a==0)
                {
                    a=a+aa*((int)(n[j])-(int)('0'));
                }
                else
                {
                    
                    b=b+bb*((int)n[j]-(int)('0'));
                }
            }
            else{
                a=a+(aa*((int)(n[j])-(int)('0')));
                aa*=10;
                bb*=10;
                
            }
        }
        printf("Case #%d: %lld %lld\n",t,a,b);
    }
    return 0;
}