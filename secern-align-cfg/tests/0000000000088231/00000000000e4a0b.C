#include<stdio.h>

int check(int k2) {
while(k2 != 0 ) {
    int r;
    r = k2%10;
    if(r != 4) {
        k2 = k2/10;
    }
    else {
        return -1;
    }
}
return 0;
}

int main() {
    int n;
    
    // printf("test cases\n");
    scanf("%d",&n);
    int arr[n];
    
    int val,i,f;
    for(  i = 0; i < n; i++) {
        // printf("enter value of input\n");
        scanf("%d",&val);
        arr[i] = val;
    }
    int temp,t1,t2,temp1[n],temp2[n];
    i = 0;
    // while(i >= (n-1)) {
        for(i = 0; i<n; i++) {
        t1= 0;
        temp = arr[i];
        label1: t2 = temp - t1;
        // printf("t2== %d\n",t2);

         f = check(t2);
         if(f == 0){
            //  printf("%d %d %d\n",t1,t2,temp);
            temp1[i] = t1;
            temp2[i] = t2;
            //   i++;
            //   printf("i=== %d\n",i);
            continue;
         }
         else {
             t1++;
            //  printf("14  %d\n",t1);
             goto label1;
            //  printf("14done  %d\n",t1);

         }
    }

    for( int i = 0; i < n; i++) {
        printf("Case #%d : %d %d\n",i+1,temp1[i],temp2[i]);
    }
}