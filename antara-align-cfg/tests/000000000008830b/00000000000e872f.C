#include<stdio.h>
int main(){
int t,i;
scanf("%d",&t);
for(i=1;i<=t;i++){
    long long n,l,j,k,m,nn;
    scanf("%lld %lld",&n,&l);
    long long a[l],b[26],bb=0,te,f,ss=0;
    for(m=0;m<26;m++){
       b[m]=-1;
    }
     for(j=0;j<l;j++){
        a[j]=0;
    }
    for(j=0;j<l;j++){
        scanf("%lld",&a[j]);
    }
    //a[l+1]='\0';
    for(k=0;k<l;k++){
    for(j=3;j<=n;j++){
            if(a[k]%j==0 && a[k]!=j){
                te=a[k]/j;
                f=0;
                    for(m=0;m<bb;m++){
                        if(b[m]==te)
                            f=1;
                    }
                if(f==0){
                    b[bb]=te;
                    bb++;
                }
            }
        }
    }

    for(m=0;m<26;m++){
                for(nn=0;nn<26;nn++){
                    if(b[m]<b[nn]){
                        te=b[m];
                        b[m]=b[nn];
                        b[nn]=te;
                    }
                }
            }
    char s[l+1];
    long long se,ll,mm,end=0;
    long long nl=0;
    for(k=0;k<l;k++){

        for(m=0;m<26;m++){
            if(end==0){
            if(a[k]%b[m]==0){

                te=b[m];

                if(a[k+1]%b[m]==0 && end == 0 && a[k]!=a[k+1]){

                    se=a[k+1]/te;

                        for(mm=0;mm<26;mm++){
                            if(b[mm]==a[k]/te){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                    end=1;
                }
                if(a[k+1]%(a[k]/te)==0 && end == 0 && a[k]!=a[k+1]){

                    se=a[k+1]/(a[k]/te);

                        for(mm=0;mm<26;mm++){
                            if(b[mm]==te){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                end=1;
            }
        if(a[k]==a[k+1]){
            long long common=0,comm,out,endd=0,last;
            common++;
            long long count;
            for(count=0;count<l-k;count++){
                if(a[k+1+count]!=a[k+2+count] && endd==0){
                if(a[k+2+count]%b[m]==0){
                        comm=b[m];

                        endd=1;
                    }
                    if(a[k+2+count]%(a[k+1+count]/b[m])==0){
                        comm=(a[k+1+count]/b[m]);
                        endd=1;
                    }
                }
            else{
                if(endd==0){
                common++;
                }
            }
            }
            if(endd==1){
            if(common%2==0){
                out=a[k]/comm;

            }
            else{
                out=comm;
            }
                        for(mm=0;mm<26;mm++){
                            if(b[mm]==out){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                        end=1;
                }
            if(endd==0){
                   // if(k!=l-1){
                    common=0;
                    nl=1;
                for(count=0;count<k;count++){
                if(a[k-1-count]!=a[k-count] && endd==0){
                if(a[k-1-count]%b[m]==0){
                        comm=b[m];
                        endd=1;
                    }
                    if(a[k-1-count]%(a[k-count]/b[m])==0){
                        comm=(a[k-count]/b[m]);
                        endd=1;
                    }
                }
            else{
                if(endd==0){
                common++;
                }
            }
            }
            if(endd==1){
            if(common%2==0){
                out=comm;

            }
            else{
                out=a[k]/comm;
            }
                        for(mm=0;mm<26;mm++){
                            if(b[mm]==out){
                                s[ss]=65+mm;

                                ss++;
                                last = out;
                                //printf("%lld ",last);
                            }
                        }
                        end=1;
               // }
            }
            if(k==l-2){
                out=a[k]/last;
                for(mm=0;mm<26;mm++){
                            if(b[mm]==out){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                        end=1;
            }
            }
        /*if(endd==0){
            if(a[k-1]%b[m]==0){
                out=b[m];
            }
            if((a[k-1]%(a[k]/b[m]))==0){
                out=(a[k]/b[m]);
            }
            for(mm=0;mm<26;mm++){
                            if(b[mm]==out){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                        end=1;
        }*/
            }
        if(k==l-1 && end==0 && nl==0){
         if(a[k]%b[m]==0){
                te=b[m];
                if(a[k-1]%b[m]==0 && end == 0){

                    se=a[k-1]/te;
                        for(mm=0;mm<26;mm++){
                            if(b[mm]==te){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                        for(mm=0;mm<26;mm++){
                            if(b[mm]==a[k]/te){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                    end=1;
                }
                if(a[k-1]%(a[k]/te)==0 && end == 0){

                    se=a[k-1]/(a[k]/te);
                    for(mm=0;mm<26;mm++){
                            if(b[mm]==a[k]/te){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                    for(mm=0;mm<26;mm++){
                            if(b[mm]==te){
                                s[ss]=65+mm;
                                ss++;
                            }
                        }
                    end=1;

            }
    }
        }
    }
        }
    }
    end=0;
    }

    s[ss]='\0';
    printf("Case #%d: ",i);
    printf("%s",s);
    /*for(ll=0;ll<ss;ll++){
    printf("%c",s[ll]);
    }*/
    printf("\n");

}
return 0;
}

