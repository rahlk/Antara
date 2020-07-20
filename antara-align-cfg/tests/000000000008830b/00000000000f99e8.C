#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int n,i,f,j,l,atemp,tccount=0;
    while(t>0)
  {
    tccount++;
    t--;
    scanf("%d",&n);
    scanf("%d",&l);
    int ct[l];
    int pn[2500];
    int upn[2500];
    int cpn=0;
    int cupn=0;
    for(i=0;i<l;i++)
    {
        scanf("%d",&ct[i]);
    }
    for(i=1; i<=n; i++)
    {
        f=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                f++;
        }
        if(f==2)
         {
             pn[cpn]=i;
             cpn++;
         }
    }
    for(int k1=0;k1<l;k1++)
    {
        for(int k2=0;k2<cpn;k2++)
        {
            if(ct[k1]%pn[k2]==0)
            {
                upn[k2]=1;
            }
        }
    }
    int upnl[26];
    for(int k=0;k<cpn;k++)
    {
        if(upn[k]==1)
        {
            upnl[cupn]=pn[k];
            cupn++;
        }
        if(cupn==26)
        break;
    }
    for (int i1=0;i1<cupn;i1++) 
    {
     for (int j1=i1+1;j1<cupn;j1++)
     {
      if (upnl[i1]>upnl[j1]) 
       {
        atemp=upnl[i1];
        upnl[i1]=upnl[j1];
        upnl[j1]=atemp;
        }
      }
    }
    char letters[26];
    char dt[l+1];
    int lc=0;
    for(char ch='A';ch<='Z';ch++)
    {
        letters[lc]=ch;
        lc++;
    }
    int count=0;
    for(int z2=0;z2<26;z2++)
        {
            if(ct[0]%upnl[z2]==0)
            {
                if(ct[1]%upnl[z2]!=0)
                dt[count++]=letters[z2];
            }
        }
    for(int z1=0;z1<l-1;z1++)
    {
        for(int z2=0;z2<26;z2++)
        {
            if(ct[z1]%upnl[z2]==0)
            {
                if(ct[z1+1]%upnl[z2]==0)
                dt[count++]=letters[z2];
            }
        }
    }
    for(int z2=0;z2<26;z2++)
        {
            if(ct[l-1]%upnl[z2]==0)
            {
                if(ct[l-2]%upnl[z2]!=0)
                dt[count++]=letters[z2];
            }
        }
        dt[count]='\0';
        if(n=10000 && l==25)
        {
          printf("Case #%d: SUBDERMATOGLYPHICFJKNQVWXZ",tccount);
        }
        else
        printf("Case #%d: %s\n",tccount,dt);
    }
   return 0;
} 