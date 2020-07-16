#include <iostream>
using namespace std;
int main()
{
    unsigned long x,T,i,temp,temp2,temp3;
   
    cin>>T;
    unsigned long N[T];
    for(i=0;i<T;i++){
        cin>>N[i];
           
        }
    for(i=0;i<T;i++)
    {
        cout<<"Case#"<<i+1<<": ";
        label1:
        temp = (rand()%N[i])+1;
        
        x= temp;
        while(temp>0){
            temp2 = temp%10;
            if(temp2 == 4){
                goto label1;
            }
            temp = temp/10;
        }
        temp =x;
        temp2= N[i]-temp;
         
         x= temp2;
        while(temp2>0)
        {
            temp3 = temp2%10;
            if(temp3 == 4){
                goto label1;
                            }
            temp2 = temp2/10;
        }
        temp2 =x;
        cout<<temp<<" "<<temp2<<"\n";
    
        
    }
    return 0;
    
}
    