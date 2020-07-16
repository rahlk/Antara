
int d[9],i, j,t[2];
 long double n;
cin>>n;

for(i=0;i<10;i++)
{ d[i]=n%10;
  n=n/10;
} 
for(i=9;i>0i++)
 { a[i]=d[i]*10;
    a[i]=a[i]+d[i+1];
     if(d[i]==4)
  { a[i]=2; 
  }
  b[i]=n[i]-a[i];
 }
 for(i=9;i>0;i++)
 { t[1]=a[i]*10;
   t[1]=t[1]+a[i+1];
   t[2]=b[i]*10;
   t[2]=t[2]+b[i+1];
 }
 for(i=0;i<9;i++)
 { cout<<"case #"<<i+1<<":"<<t[1]<<"\t"<<t[2];
 }
 getch();
 return 0;
 }