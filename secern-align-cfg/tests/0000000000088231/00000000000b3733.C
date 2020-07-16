main()
{
    int T,N[3],i,j,A,B;
    printf("Enter the no. of test cases.");
    scanf("\n%d",&T);
    printf("Enter the no. of jamcoins owed");
    for(i=0;i<=2;i++){
        scanf("\n%d",N[i]);
    }
    for(i=1;i<=N[1]-1;i++){
        for(j=N[1]-1;j>=1;j--){
            A=i;
            B=j;
            if(A+B=N[1]&&A%10!=4&&B%10!=4)
            break();
        }
    }
    printf("Case #1: %d %d",A B);
    for(i=1;i<=N[2]-1;i++){
        for(j=N[2]-1;j>=1;j--){
            A=i;
            B=j;
            if(A+B=N[2]&&A%10!=4&&B%10!=4)
            break();
        }
    }
    printf("Case #2: %d %d",A B);
    for(i=1;i<=N[3]-1;i++){
        for(j=N[3]-1;j>=1;j--){
            A=i;
            B=j;
            if(A+B=N[3]&&A%10!=4&&B%10!=4)
            break();
        }
    }
    printf("Case #3: %d %d",A B);
}