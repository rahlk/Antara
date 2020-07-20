#include<stdio.h>
void swap(int arr[20][2],int n){
    int a,b,c,d,e,f,g,h,l,m;
    a=arr[n-1][0];b=arr[n-1][1];
    for(int i=2;i<n-1;i++){
        c=arr[i-1][0];d=arr[i-1][1];e=arr[i+1][0];f=arr[i+1][1];g=arr[i][0];h=arr[i][1];l=arr[0][0];m=arr[0][1];
       if(a!=c && a!=e && b!=d && b!=f && (a+b)!=(c+d) && (a+b)!=(e+f) && (a-b)!=(c-d) && (a-b)!=(e-f) && (l==g || m==h || (l+m)==(g+h) || (l-m)==(g-h)))
       {
           arr[i][0]=a;arr[i][1]=b;arr[n-1][0]=g;arr[n-1][1]=h;
       }
    }
}
int check(int ar[20][2],int n,int a,int b){
    for(int i=0;i<n;i++){
        if(ar[i][0]==a && ar[i][1]==b)
        return 0;
    }
    return 1;
}
int main(){
    int t,t1,a,b,c,d,r,r1,c1;
    scanf("%d",&t);
    t1=t;
    while(t--){
        a=0;
        scanf("%d %d\n",&r,&c);
        int arr[r*c][2],arr2[r*c][2];
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[a][0]=i;arr[a][1]=j;
                a++;
            }
        }
        
        for(int i=0;i<a;i++){
            arr2[0][0]=r1=arr[i][0];arr2[0][1]=c1=arr[i][1];b=1;
            
            for(int j=0;j<r;j++){
                for(int k=0;k<c;k++){
                    if(j!=r1 && k!=c1 && (j-k)!=(r1-c1) && (j+k)!=(r1+c1) && check(arr2,b,j,k)){
                        arr2[b][0]=j;arr2[b][1]=k;b++;r1=j;c1=k;j=0;k=0;
                    }
                    
                }
                if(b==a)
                goto end;
            }
        }
        end:
        swap(arr2,b);
        if(b==a)
        {printf("Case #%d: POSSIBLE\n",t1-t);
            for(int i=0;i<a;i++){
                printf("%d %d\n",arr2[i][0]+1,arr2[i][1]+1);
            }
        }
        else
        printf("Case #%d: IMPOSSIBLE\n",t1-t);
        printf("\n");
        
    }
    return 0;
    }
