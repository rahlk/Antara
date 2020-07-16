bool contains(int X)
{
    int i=X;
    while(i!=0)
    {
        if(i%10==4)
        return false;
        i=i/10
    }
    
    
}
void main()
{
    int A,B,T,N;
    scanf("%d",&T);
    int i;
    for(i=1;i<=T;i++)
    {
       scanf("%d",&N);
       A=N;
       while(contains(A)||contains(B))
       {
           A--;
           B++;
       }
       printf("case #%d: %d %d",i,A,B);
    }
}