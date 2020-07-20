#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int T,N,B,F,sec,ret,nouse,use,list;
char buffer[1028];
int status[2][1024];
int result[15];
int skip[2][1024];
int record[1024];

int compare(const void *a,const void *b){
  int A = *(int*)a;
  int B = *(int*)b;
  if(A>B)
    return 1;
  else if(A==B)
    return 0;
  else
    return -1;
}

void query(){
  puts(buffer);
  fflush(stdout);
  scanf("%s",buffer);
  return;
}

void divide(){
  int lastsec=N%sec;
  int tot,cnt,usesec,ptr,limiter;
  char cur;
  tot=N/sec;
  if(lastsec!=0)
    tot++;
  usesec = sec;
  for(int i = 0;i<tot;i++){
    if(i==tot-1 && lastsec!=0)
      usesec = lastsec;
    cur = '0'+i%2;
    for(int j = 0;j<usesec;j++)
      buffer[i*sec+j] = cur;
  }
  query();
  usesec = sec;
  ptr = 0;
  for(int i = 0;i<tot;i++){
    if(i==tot-1 && lastsec!=0)
      usesec = lastsec;
    cur = '0'+i%2;
    cnt = 0;
    if(skip[use][i/2]==1){
      skip[nouse][i]=1;
      continue;
    }
    limiter = status[use][i/2];
    if(i%2==1)
      limiter+=(sec-status[nouse][i-1]);
    while(ptr<N-B && buffer[ptr]==cur && cnt<usesec && cnt+limiter<sec*2){
      cnt++;
      ptr++;
    }
    status[nouse][i]=usesec-cnt;
    if(cnt==0){
      for(int j = 0;j<usesec;j++){
        result[list]=i*sec+j;
        list++;
      }
      if(list==B)
        return;
      skip[nouse][i]=1;
    }
    else
      skip[nouse][i]=0;
  }
  use=nouse;
  nouse=1-use;
  /*
  printf("--> ");
  for(int i = 0;i<list;i++)
    printf("%d ",result[i]);
  puts("");
  printf("meta: %d %d\n",nouse,use);
  for(int i = 0;i<tot;i++)
    printf("%d ",skip[use][i]);
  puts("");
  printf("status\n");
  for(int i = 0;i<tot;i++)
    printf("%d ",status[use][i]);
  puts("");
  */
  return;
}

void binsearch(){
  while(sec!=0){
    divide();
    if(list==B)
      return;
    sec/=2;
  }
  return;
}


void solve(){
  scanf("%d",&T);
  for(int i = 0;i<T;i++){
    scanf("%d%d%d",&N,&B,&F);
    list=0;
    nouse=0;
    use=1;
    for(int j = 0;j<N;j++){
      skip[use][j]=0;
      status[use][j]=0;
    }
    sec=16;
    while(N<=sec)
      sec/=2;
    binsearch();
    qsort(result,B,sizeof(int),compare);
    for(int j = 0;j<B;j++)
      printf("%d ",result[j]);
    puts("");
    fflush(stdout);
    scanf("%d",&ret);
    if(ret!=1){
      exit(0);
    }
  }
  return;
}

int main(){
  solve();
  return 0;
}
