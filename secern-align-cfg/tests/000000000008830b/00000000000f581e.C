#include <stdio.h>
#include <string.h>

unsigned long long pgcd(unsigned long long a, unsigned long long b)
{

  if(b==0) return(a);
  else return(pgcd(b,a%b));

}

int existe(unsigned long long * t, unsigned long long v)
{

  int i;
  for(i=0;i<26;i++)
    {
	if(t[i]==v) return(1);
    }
  return(0);
}

void table(unsigned long long * tab, unsigned long long * alpha, int l)
{

  int i,j;
  unsigned long long div;

  for(i=0;i<26;i++) alpha[i]=0;

  for(i=0,j=0;i<l-1;i++)
    {

	div=pgcd(tab[i],tab[i+1]); //if(i==0) {printf("***%lld %lld\n",tab[i],tab[i+1]);}
	if(!existe(alpha, div)) { alpha[j]=div; j++; }
	if(j==1) {alpha[j]=tab[0]/div; j++;}
	if(i==l-2) {alpha[25]=tab[i+1]/div;}


    }

  /*for(i=0;i<26;i++) printf("%lld ",alpha[i]);
  printf("\n");*/

}


void tribulle(unsigned long long * tab)
{

  int i,a;
  unsigned long long s;

  do {
	a=0;
	for(i=0;i<25;i++)
	  {
		if(tab[i]>tab[i+1])
		  {
			s=tab[i];
			tab[i]=tab[i+1];
			tab[i+1]=s;
			a=1;
		  }
	  }
    } while(a==1);

}

void corresp(unsigned long long * alpha, unsigned long long beta[26][26])
{

  int i,j;
  for(i=0;i<26;i++)
    {
	for(j=0;j<26;j++)
	  {
	    beta[i][j]=alpha[i]*alpha[j];
	  }
    }

}

void search(unsigned long long v,unsigned long long w, unsigned long long beta[26][26],int b)
{

  int i,j,k,l,a=0;

  for(i=0;i<26;i++)
    {
	for(j=0;j<26;j++)
	  {
	    if(beta[i][j]==v) {a=1; break;}
	  }
	if(a==1) break;
    }

  a=0;

  for(k=0;k<26;k++)
    {
	for(l=0;l<26;l++)
	  {
	    if(beta[k][l]==w) {a=1; break;}
	  }
	if(a==1) break;
    }
  if(b==0) {
  if(j==k || j==l) printf("%c%c",(char)65+i,(char)65+j);
  else if(i==k || i==l) printf("%c%c",(char)65+j,(char)65+i); }
  else {
         if(j==k || j==l) printf("%c%c",(char)65+j,(char)65+i);
         else if(i==k || i==l) printf("%c%c",(char)65+i,(char)65+j); }


}

int main(int argc, char ** argv)
{

  int T,i,j,n,l;
  unsigned long long tab[100], alpha[26], beta[26][26];

  scanf("%d",&T);

  for(i=1;i<=T;i++)
    {
	scanf("%d",&n);
	scanf("%d",&l);

	for(j=0;j<l;j++) scanf("%lld",&tab[j]);
	
	printf("Case #%d: ",i);

	table(tab, alpha,l);

	tribulle(alpha);

	//for(j=0;j<26;j++) printf("%lld ",alpha[j]);
  	//printf("\n");

	corresp(alpha, beta);

	if((l%2)!=0) {
	for(j=0;j<l-2;j+=2) 
	  {
	    search(tab[j],tab[j+1],beta,0);
	    //printf("*%d ",j);
	  } }
	else {
	for(j=0;j<l-1;j+=2) 
	  {
	    search(tab[j],tab[j+1],beta,0);
	    //printf("*%d ",j);
	  } 

	}

	search(tab[l-1],tab[l-2],beta,1);

	printf("\n");

	



    }

  return(0);
}