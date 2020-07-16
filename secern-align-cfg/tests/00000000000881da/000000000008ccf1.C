int main(int argc, char** argv)
{
    int t, n, c;
    int x = 0, y = 0, lx = 0, ly = 0;
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
    {
        printf("Case #x: ");
        
        scanf("%d", &n);
        for(int j = 0; j < 2*n - 2; j++)
        {
           scanf("%c", &c);
           if(x == lx && y == ly)
           {
               if(c == 'S')
               {
                   printf("E");
                   x += 1;
               }
               else
               {
                   printf("S");
                   y += 1;
               }
           }
           else
           {
               if(x < y)
               {
                   printf("E");
                   x += 1;
               }
               else
               {
                   printf("S");
                   y += 1;
               }
           }
           if(c == 'S')
           {
               ly += 1;
           }
           else
           {
               lx += 1;
           }
        }
        
        printf("\n");
    }
    return 0;
}