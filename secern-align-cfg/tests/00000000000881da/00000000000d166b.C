public class Solution 
{
void main()
{
    String S2=" ";
    int i=0;
    
    int N;
    String P;
    scanf("%d",&N);
    scanf("%c",&P);
    for(i=0;i<=P.length(); i++)
    {
        char C=P.charAt(i);
        if(C=='E')
        S2=P.replace('E','S');
        if(C=='S')
        S2=P.replace('S','E');
    }
    printf("Case #1"+S2);
}
}


