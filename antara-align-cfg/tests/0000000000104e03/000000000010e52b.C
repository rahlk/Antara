#include<iostream>
#include<queue>

#define ll long long
#define endl '\n'

using namespace std;

ll r[25],c[25],trvis[30][30],cnt;
ll vis[30][30];
struct pos{
    ll x,y;
};
queue<pos> q;
pos obj;
pos path[1000];

void visi(ll x,ll y,ll r,ll c){
    memset(vis,0,sizeof(vis));
    trvis[x][y]=1;
    vis[x][y]=1;
    vis[x-1][y-1]=1;
    vis[x+1][y+1]=1;
    vis[x-1][y+1]=1;
    vis[x+1][y-1]=1;
    for(int i=0;i<r;i++){
        for(int k=0;k<c;k++){
            vis[x][k]=1;
            vis[i][y]=1;
        }
    }
    // for(int i=0;i<r;i++){
    //     for(int k=0;k<c;k++){
    //         cout<<trvis[i][k];
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>r[i]>>c[i];
    }
    for(int i=0;i<t;i++){
        memset(trvis,0,sizeof(trvis));
        memset(vis,0,sizeof(vis));
        cnt=1;
        while(!q.empty())q.pop();
        if(r[i]==c[i])cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
        else{
            if(r[i]%2==0)obj.x=r[i]-1;
            else obj.x=(r[i]+1)/2-1;
            
            if(c[i]%2==0)obj.y=c[i]-1;
            else obj.y=(c[i]+1)/2-1;
            //cout<<"##"<<obj.x<<" "<<obj.y<<endl;
            path[cnt-1].x=obj.x;
            path[cnt-1].y=obj.y;
            q.push(obj);
            while(!q.empty()){
                pos p=q.front();
                q.pop();
                if(cnt==r[i]*c[i]){
                    cout<<"Case #"<<i+1<<": POSSIBLE"<<endl;
                    for(int l=0;l<cnt;l++){
                        cout<<path[l].x+1<<" "<<path[l].y+1<<endl;
                    }
                    break;
                }
                else{
                    bool b=0;
                    visi(p.x,p.y,r[i],c[i]);
                    //cout<<" ##"<<path[0].x<<" "<<path[0].y<<endl;
                    for(int x=0;x<r[i];x++){
                        for(int y=0;y<c[i];y++){
                            if(vis[x][y]==0&&trvis[x][y]==0){
                                obj.x=x;
                                obj.y=y;
                                q.push(obj);
                                cnt++;
                                b=1;
                                path[cnt-1].x=x;
                                path[cnt-1].y=y;
                                break;
                            }
                        }
                    }
                    //cout<<"##"<<b<<" "<<cnt<<endl;
                    if(b==0){
                        cout<<"Case #"<<i+1<<": IMPOSSIBLE"<<endl;
                        break;
                    }                    
                }
            }
            
        }
    }

    return 0;
}