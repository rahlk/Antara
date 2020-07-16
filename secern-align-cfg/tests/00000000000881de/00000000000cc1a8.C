#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int T,N,B,F,sec,ret;
char buffer[1028];
int status[1024];
int record[1024];
int result[15];

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
  fputs(buffer,stderr);
  fflush(stdout);
  scanf("%s",buffer);
  return;
}

void divide(){
  int lastsec=N%sec;
  int tot=N/sec+(int)(lastsec!=0),cnt,flag=0,usesec,ptr;
  char cur;
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
    flag = 0;
    for(int j = 0;j<usesec;j++)
      if(record[i*sec+j]==0){
        flag = 1;
        break;
      }
    if(flag==0)
      continue;
    while(buffer[ptr]==cur && cnt<usesec){
      cnt++;
      ptr++;
    }
    status[i]=usesec-cnt;
    if(cnt==0)
      for(int j = 0;j<usesec;j++)
        record[i*sec+j]=1;
  }
  return;
}

void binsearch(){
  for(int i = 0;i<5;i++){
    divide();
    sec/=2;
    //printf("-->  ");
    //for(int j = 0;j<N;j++)
    //  printf("%d ",record[j]);
    //puts("");
    if(sec==0)
      break;
  }
  return;
}


void solve(){
  int list;
  scanf("%d",&T);
  for(int i = 0;i<T;i++){
    scanf("%d%d%d",&N,&B,&F);
    for(int j = 0;j<1024;j++)
      record[j]=0;
    sec=16;
    while(N<sec)
      sec/=2;
    binsearch();
    list = 0;
    for(int j = 0;j<N;j++)
      if(record[j]!=0){
        result[list]=j;
        list++;
        if(list==B)
          break;
      }
    qsort(result,B,sizeof(int),compare);
    for(int j = 0;j<B;j++)
      printf("%d ",result[j]);
    puts("");
    fputs("",stderr);
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
