//set many funcs template
//Ver.20181228
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<time.h>
#define inf 1072114514
#define llinf 4154118101919364364
#define mod 1000000007
#define pi 3.1415926535897932384

int max(int a,int b){if(a>b){return a;}return b;}
int min(int a,int b){if(a<b){return a;}return b;}
int zt(int a,int b){return max(a,b)-min(a,b);}
int round(int a,int b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
int ceil(int a,int b){if(a%b==0){return a/b;}return (a/b)+1;}
int gcd(int a,int b){int c;while(b!=0){c=a%b;a=b;b=c;}return a;}
int lcm(int a,int b){int c=gcd(a,b);a/=c;return a*b;}
int nCr(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=(a+1-i);r/=i;}return r;}
int nHr(int a,int b){return nCr(a+b-1,b);}
int fact(int a){int i,r=1;for(i=1;i<=a;i++){r*=i;}return r;}
int pow(int a,int b){int i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
int dsum(int x){int r=0;while(x){r+=(x%10);x/=10;}return r;}
int dsumb(int x,int b){int r=0;while(x){r+=(x%b);x/=b;}return r;}
int sankaku(int x){return ((1+x)*x)/2;}
long long llmax(long long a,long long b){if(a>b){return a;}return b;}
long long llmin(long long a,long long b){if(a<b){return a;}return b;}
long long llzt(long long a,long long b){return llmax(a,b)-llmin(a,b);}
long long llround(long long a,long long b){if((a%b)*2 >= b){return (a/b)+1;}return a/b;}
long long llceil(long long a,long long b){if(a%b==0){return a/b;}return (a/b)+1;}
long long llgcd(long long a,long long b){long long c;while(b!=0){c=a%b;a=b;b=c;}return a;}
long long lllcm(long long a,long long b){long long c=llgcd(a,b);a/=c;return a*b;}
long long llnCr(long long a,long long b){long long i,r=1;for(i=1;i<=b;i++){r*=(a+1-i);r/=i;}return r;}
long long llnHr(long long a,long long b){return llnCr(a+b-1,b);}
long long llfact(long long a){long long i,r=1;for(i=1;i<=a;i++){r*=i;}return r;}
long long llpow(long long a,long long b){long long i,r=1;for(i=1;i<=b;i++){r*=a;}return r;}
long long lldsum(long long x){long long r=0;while(x){r+=(x%10);x/=10;}return r;}
long long lldsumb(long long x,long long b){long long r=0;while(x){r+=(x%b);x/=b;}return r;}
long long llsankaku(long long x){return ((1+x)*x)/2;}
double dbmax(double a,double b){if(a>b){return a;}return b;}
double dbmin(double a,double b){if(a<b){return a;}return b;}
double dbzt(double a,double b){return dbmax(a,b)-dbmin(a,b);}
int sortfncsj(const void *a,const void *b){if(*(int *)a>*(int *)b){return 1;}if(*(int *)a==*(int *)b){return 0;}return -1;}
int sortfnckj(const void *a,const void *b){if(*(int *)a<*(int *)b){return 1;}if(*(int *)a==*(int *)b){return 0;}return -1;}
int llsortfncsj(const void *a,const void *b){if(*(long long *)a>*(long long *)b){return 1;}if(*(long long *)a==*(long long *)b){return 0;}return -1;}
int llsortfnckj(const void *a,const void *b){if(*(long long *)a<*(long long *)b){return 1;}if(*(long long *)a==*(long long *)b){return 0;}return -1;}
int dbsortfncsj(const void *a,const void *b){if(*(double *)a>*(double *)b){return 1;}if(*(double *)a==*(double *)b){return 0;}return -1;}
int dbsortfnckj(const void *a,const void *b){if(*(double *)a<*(double *)b){return 1;}if(*(double *)a==*(double *)b){return 0;}return -1;}
int strsortfncsj(const void *a,const void *b){return strcmp((char *)a,(char *)b);}
int strsortfnckj(const void *a,const void *b){return strcmp((char *)b,(char *)a);}
int chsortfncsj(const void *a,const void *b){if(*(char *)a>*(char *)b){return 1;}if(*(char *)a==*(char *)b){return 0;}return -1;}
int chsortfnckj(const void *a,const void *b){if(*(char *)a<*(char *)b){return 1;}if(*(char *)a==*(char *)b){return 0;}return -1;}

void shuffledget(int x[],int n){
    srand(time(0));
    int i,b[524288],p,c;
    for(i=0;i<n;i++){
        b[i]=i;
    }
    for(i=n;i>=1;i--){
        p=rand()%i;
        c=b[i-1];b[i-1]=b[p];b[p]=c;
    }
    for(i=0;i<n;i++){
        scanf("%d",&x[b[i]]);
    }
}

int dx4[4]={1,-1,0,0};
int dy4[4]={0,0,1,-1};
int dx8[8]={-1,-1,-1,0,0,1,1,1};
int dy8[8]={-1,0,1,-1,1,-1,0,1};

int search(int x,int a[],int n){
    int st=0,fi=n-1,te;
    while(st<=fi){
        te=(st+fi)/2;
        if(a[te]<x){st=te+1;}else{fi=te-1;}
    }
    return st;
}

void prarr(int arr[],int n){
  int i;
  for(i=0;i<n;i++){
    if(i){printf(" ");}
    printf("%d",arr[i]);
  }
  printf("\n");
  return;
}

typedef struct{
int val;
int node;
}sd;

int sdsortfnc(const void *a,const void *b){
if(((sd*)a)->val < ((sd*)b)->val){return -1;}
if(((sd*)a)->val > ((sd*)b)->val){return 1;}
return 0;
}

int mex(int a[32],int cnt){
  int i,b[32]={0};
  for(i=0;i<cnt;i++){
    b[a[i]]++;
  }
  for(i=0;i<32;i++){
    if(b[i]==0){
      return i;
    }
  }
}

int mem[16][16][16][16];

void resmem(){
  int i,j,k,l;
  for(i=0;i<16;i++){
    for(j=0;j<16;j++){
      for(k=0;k<16;k++){
        for(l=0;l<16;l++){
          mem[i][j][k][l]=-1;
        }
      }
    }
  }
}

int result;
char s[16][16];

int grundy(int sh,int sw,int fh,int fw,bool cfl){
  if(mem[sh][sw][fh][fw]!=-1){return mem[sh][sw][fh][fw];}
  int i,j,arr[32]={0},p=0,fl;
  for(i=sh;i<=fh;i++){
    fl=1;
    for(j=sw;j<=fw;j++){
      if(s[i][j]=='#'){fl=0;break;}
    }
    if(fl==1){
      if(i!=sh){
        //printf("(%d %d %d %d)-->(%d %d %d %d)\n",sh,sw,fh,fw,sh,sw,i-1,fw);
        arr[p]^=grundy(sh,sw,i-1,fw,false);
      }
      if(i!=fh){
        //printf("(%d %d %d %d)-->(%d %d %d %d)\n",sh,sw,fh,fw,i+1,sw,fh,fw);
        arr[p]^=grundy(i+1,sw,fh,fw,false);
      }
      //printf("%d %d %d %d[%d]\n",sh,sw,fh,fw,arr[p]);
      if(arr[p]==0 && cfl){
        result+=(fw-sw+1);
      }
      p++;
    }
  }
  for(j=sw;j<=fw;j++){
    fl=1;
    for(i=sh;i<=fh;i++){
      if(s[i][j]=='#'){fl=0;break;}
    }
    if(fl==1){
      if(j!=sw){
        //printf("(%d %d %d %d)->(%d %d %d %d)\n",sh,sw,fh,fw,sh,sw,fh,j-1);
        arr[p]^=grundy(sh,sw,fh,j-1,false);
      }
      if(j!=fw){
        //printf("(%d %d %d %d)->(%d %d %d %d)\n",sh,sw,fh,fw,sh,j+1,fh,fw);
        arr[p]^=grundy(sh,j+1,fh,fw,false);
      }
      if(arr[p]==0 && cfl){
        result+=(fh-sh+1);
      }
      p++;
    }
  }
  mem[sh][sw][fh][fw]=mex(arr,p);
  //printf("(%d,%d) (%d,%d) : %d\n",sh,sw,fh,fw,mem[sh][sw][fh][fw]);
  return mem[sh][sw][fh][fw];
}

int main(void){
  int i,j,t,h,w;
  scanf("%d",&t);
  for(i=1;i<=t;i++){
    scanf("%d%d",&h,&w);
    for(j=0;j<h;j++){
      scanf("%s",s[j]);
    }
    resmem();
    result=0;
    if(grundy(0,0,h-1,w-1,true)==0){
      printf("Case #%d: %d\n",i,0);
    }
    else{
      printf("Case #%d: %d\n",i,result);
    }
  }
  return 0;
}
