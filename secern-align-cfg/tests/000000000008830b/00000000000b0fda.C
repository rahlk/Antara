#include<stdio.h>
#include<math.h>

int size=0;

void insert(int arr[],int num){
    int j,i;
    for(i=0;i<26;i++){
        if (arr[i]==num) break;
        if(arr[i-1]<num&&arr[i]>num){
            for(j=25;j>i;j--){ arr[j]=arr[j-1]; }
            arr[i]=num;size++;
        }
    }
}

void decyper(int arr[], int num){
    char c;int i;
    for(i=0;i<26;i++){
        if(arr[i]==num){
            c=i+'A'; printf("%c",c);
        }
    }
}



int main() {
  int t, n, l,prime,j;
  int primes[26]; int k=1,i;
  scanf("%d",&t);
  for (j = 1; j <= t; j++) {
    scanf("%d",&n);
    scanf("%d",&l);

    int ctext[l];

    for(i=0;i<l;i++){
        scanf("%d",ctext[i]);
    }
    int a,b;
    for(i=3;i<=sqrt(n);i+=2){
        if((ctext[0]%i)==0){a=i; b=ctext[0]/i; break;}}

        int a1=a;

        insert(primes,a); insert(primes,b);

    for(i=1;i<l;i++){
        if(ctext[i-1]==ctext[i])continue;

        else if((ctext[i]%a)==0){b=ctext[i]/a; insert(primes,b); continue;}
        else if((ctext[i]%b)==0){a=ctext[i]/b; insert(primes,a); continue;}
        else if(size>=26) break;
        }


    printf("case #%d: ",j);


    while(ctext[k]==ctext[k-1]){k++;}
    if(ctext[k]%a1==0)a1=ctext[0]/a1;
    decyper(ctext,a1);

    for(i=1;i<l;i++){
            if(ctext[i]==ctext[i-1]){decyper(ctext,a1);continue;}
            a1=ctext[i-1]/a1;
            decyper(ctext,a1);
    }


    printf("%d\n",ctext[l-1]/a1);
  }

  return 0;
}
