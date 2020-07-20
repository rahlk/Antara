#include<stdio.h>
#include<string.h>
void calc2(long long int n,char pl[],int cas){
    char res[2*n-1];
    char m[n][n],m2[n][n];
    long long int j,k;
    for(long long int i=0;i<n;i++){
        for(long long int pp=0;pp<n;pp++)
            m[i][pp]='B';
    }
    j=0;k=0;
    for(long long int i=0;i<strlen(pl);i++){
        m[j][k]=pl[i];
        if(pl[i]=='S'){
            j++;
        }
        else{
            k++;
        }

    }


    for(long long int i=0;i<n;i++){
        for(long long int j=0;j<n;j++){
            if(m[i][j]=='S')
                m2[j][i]='E';
            else if(m[i][j]=='E'){
                m2[j][i]='S';
            }
            else
            {
                m2[j][i]='B';
            }
            
        }
    }

    //  for(int i=0;i<n;i++){
    //     for(j=0;j<n;j++)
    //         printf("%c ",m[i][j]);
    //     printf("\n");
    // }
    k=0;
    printf("Case #%d: ",cas);
    for(long long int i=0;i<n;i++){
        for(j=0;j<n;j++){
          {  if(m2[i][j]!='B')
                {//res[k++]=m2[i][j];
                printf("%c",m2[i][j]);
                }
            }
        }
        //     printf("%c ",m2[i][j]);
        // printf("\n");
    }
    printf("\n");
    

}
// void calc(int n,char pl[]){
//     int j,k;
//     char m[n][n],m2[n][n];
    
//     for(int i=0;i<n;i++){
//         for(int pp=0;pp<n;pp++)
//             m[i][pp]='B';
//     }
//     j=0;k=0;
//     for(int i=0;i<strlen(pl);i++){
//         m[j][k]=pl[i];
//         if(pl[i]=='S'){
//             j++;
//         }
//         else{
//             k++;
//         }

//     }
//     int i=0;j=0;
//     char dir;
//     while(i<n-1 || j<n-1){
//         if(j>n-1 && dir=='E'){
//             j--;
//                 m2[i][j]='S';
//                 // if(j==n){
//                 //     j--;
//                 // }
//                 i++;
//         }
//         if(i>n-1 && dir=='S'){
//             i--;
//             m2[i][j]='E';
//             // if(i==n){
//             //     i--;
//             // }
//             j++;
//         }
//         if(m[i][j]=='S'){
//             m2[i][j]='E';
//             dir='E';
//             j++;
//         }
//         else if(m[i][j]=='E'){
//             m2[i][j]='S';
//             dir='S';
//             i++;
//         }
//         else{
//             if(dir=='E'){
                
//                 m2[i][j]='E';
//                 dir='E';
//                 j++;
//             }
//             if(dir=='S'){
                
//                 m2[i][j]='S';
//                 dir='S';
//                 i++;
//             }

//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//             printf("%c ",m[i][j]);
//         printf("\n");
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//             printf("%c ",m2[i][j]);
//         printf("\n");
//     }

// }
int main(){
    int t;
    long long int n;
    
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%lld",&n);
        char pl[2*n-1];
        scanf("%s",pl);
        //printf("%s",pl);
        calc2(n,pl,i+1);
    }
    return 0;
    
}
