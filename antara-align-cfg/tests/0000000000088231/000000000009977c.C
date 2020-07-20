int n,a,b,fn=0,fa=0,fb=0,i=0;
main()
{
     scanf("%d",&n);
     fn=check(n);
     if(fn==1)
     {
          a=n/2;
          b=n/2;
          fa=check(a);
          fb=check(b);
          if(fa==0||fb==0)
           printf("%d %d",a,b);
          else
           convert(a,b);
        
     }
}
check(int x)
{
    while(x>0)
    {
         dig=x%10;
         if(dig==4)
          return 1;
         x=x/10;
    }
}    

convert(int a,int b)
{   fa=0;
    fb=0;
     a=a+i;
     b=b-i;
     ++i;
     fa=check(a);
     fb=check(b);
     if(fa==0&&fb==0)
      printf("%d %d",a,b);
     else
      convert(a,b);
}