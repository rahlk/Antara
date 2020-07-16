#include<stdio.h>
int main(){
int t,i;
scanf("%d",&t);
for(i=1;i<=t;i++){
long long aa,a,j,ii;
scanf("%lld",&a);
aa=2*(a-1);
char b[aa],c[aa];
scanf("%s",b);
if(b[0]!=b[aa-1]){
    for(j=0;j<aa;j++){
        if(j<(a-1)){
            if(b[0]=='E')
                c[j]='S';
            if(b[0]=='S')
                c[j]='E';
        }
        else{
            if(b[0]=='E')
                c[j]='E';
            if(b[0]=='S')
                c[j]='S';
            }
 }
}
else{
    long long ce=a-1,cs=a-1,cce=0,ccs=0,cc=0,k,cross=0,end=0;
    for(j=0;j<aa;j++){
        if(b[0]=='E'){
            if(cross==1 && end==0){
                for(k=1;k<=ce;k++){
                    c[cc]='E';
                    cc++;
                }
                for(k=1;k<=cs;k++){
                    c[cc]='S';
                    cc++;
                }
                end=1;
            }
            else if(end==0){
            if(j==0){
            c[cc]='S';
            cc++;
            }
            if(b[j]=='E'){
                    cce++;
                }
                if(b[j]=='S' && b[j+1]=='S'){
                    for(k=0;k<=cce;k++){
                        c[cc]='E';
                        cc++;
                        ce--;
                    }
                    cross=1;
                }
                if(b[j]=='S' && b[j+1]=='E'){
                    c[cc]='S';
                    cc++;
                    cs--;
                }
            }
        }
        if(b[0]=='S'){
            if(cross==1 && end==0){
                for(k=1;k<=cs;k++){
                    c[cc]='S';
                    cc++;
                }
                for(k=1;k<=ce;k++){
                    c[cc]='E';
                    cc++;
                }
                end=1;
            }
            else if(end==0){
            if(j==0){
            c[cc]='E';
            cc++;
            }
                if(b[j]=='S'){
                    ccs++;
                }
                if(b[j]=='E' && b[j+1]=='E'){
                    for(k=0;k<=ccs;k++){
                        c[cc]='S';
                        cc++;
                        cs--;
                    }
                    cross=1;
                }
                if(b[j]=='E' && b[j+1]=='S'){
                    c[cc]='E';
                    cc++;
                    ce--;
                }
            }
        }
    }
}
    printf("Case #%d: ",i);
    for(ii=0;ii<aa;ii++){
        printf("%c",c[ii]);
    }
    printf("\n");
}
return 0;
}

