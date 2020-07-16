int main(){
int n; int i,j;
scanf("%d\n",&n);
long long int A[n];
for (i=0; i<n;i++){
    scanf("%lld\n",&A[i]);
}
for (i=0;i<n;i++){
  //  len = sizeof(A[i])/sizeof(long long int);
   printf("%lld",A[i]);
    
}
}