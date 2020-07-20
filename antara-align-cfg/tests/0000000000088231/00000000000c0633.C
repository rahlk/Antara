#include<stdio.h>
int main()
{
int ncase,i,r=3;
long long  n[100],k,m,dm,dk;
//cout<<"Enter csae:";
scanf("%d",&ncase);
for(i=0;i<ncase;++i)                           //cases
{       //cout<<"\nfor case:"<<i+1<<"::";
	scanf("%lld",&n[i]);
       //	cout<<n[i]<<"\n"  ;
}
for(i=0;i<ncase;++i)
{
	for(k=2;k<=n[i]/2;++k)
	{   r=3;
	     //cout<<"In loop::"<<i<<"\t";                     //2222
	m=n[i] -k;
	dm=m;
	dk =k;
	for(;dm>0;(dm=dm/10,dk=dk/10))
	{                         //111
	if((dm%10==4)||(dk%10==4))
	{
	r=0;
	break;
	}
	}                      //111111
	if(r!=0)
	{
       //cout<<"Case #"<<i+1<<": "<<k<<" "<<m<<"\n";
       printf("Case #%d : %lld %lld \n",i+1,k,m);
	//r=3;
	break;
	}
	}		//22222

}                                          //cases
return(1);
}