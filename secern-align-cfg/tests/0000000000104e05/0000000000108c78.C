#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
  int cnt;
  int next[26];
}LETTER;

int T,W,len,trav,root,unused,idx;
int pairs;
LETTER letter[50004];
char buffer[60];

int cntpair(int cur){
  if(cur==-1)
    return 0;
  if(letter[cur].cnt<2)
    return 0;
  int used = 0;
  for(int i = 0;i<26;i++)
    used+=cntpair(letter[cur].next[i]);
  if(letter[cur].cnt-used>=2 && cur!=0){
    pairs+=2;
    return 2;
  }
  return 0;
}

void printtree(int cur,int depth){
  if(cur==-1)
    return;
  printf("%d\n",letter[cur].cnt);
  for(int i = 0;i<26;i++){
    if(letter[cur].next[i]!=-1){
      for(int j = 0;j<depth;j++)
        printf(" ");
      printf("%c : ",'A'+i);
      printtree(letter[cur].next[i],depth+1);
    }
  }
  return;
}

void solve(){
  scanf("%d",&T);
  for(int i = 1;i<=T;i++){
    for(int j = 0;j<50004;j++){
      letter[j].cnt = 0;
      for(int k = 0;k<26;k++)
        letter[j].next[k] = -1;
    }
    root = 0;
    unused = 1;
    scanf("%d",&W);
    for(int j = 0;j<W;j++){
      scanf("%s",buffer);
      len = strlen(buffer);
      trav = root;
      letter[trav].cnt+=1;
      for(int k = len-1;k>=0;k--){
        idx = buffer[k]-'A';
        if(letter[trav].next[idx]==-1){
          letter[trav].next[idx] = unused;
          unused++;
        }
        trav = letter[trav].next[idx];
        letter[trav].cnt+=1;
      }
    }
    pairs = 0;
    //printtree(0,0);
    cntpair(0);
    printf("Case #%d: %d\n",i,pairs);
  }
}

int main(){
  solve();
}
