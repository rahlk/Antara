//#define DEBUG

#include <stdio.h>
#include <string.h>

char *calcula(int r, int l, int *f, int n);

int main()
{
#ifdef DEBUG
    FILE *file;
#endif
    
    int t, n, l, i, j;
    int f[101];
    char *s;
    
#ifdef DEBUG
    file = fopen("input.txt", "r");
    fscanf(file, "%d", &t);
#else
    scanf("%d", &t);
#endif    
    
    for (i=0; i< t; i++)
    {
#ifdef DEBUG
        fscanf(file, "%d", &n);
        fscanf(file, "%d", &l);
        for (j=0; j< l; j++)
            fscanf(file, "%d", &f[j]);
#else
        scanf("%d", &n);
        scanf("%d", &l);
        for (j=0; j< l; j++)
            scanf("%d", &f[j]);
#endif
        
        
        s = calcula(0, l, f, n);
        if (!s[0])
            s = calcula(1, l, f, n);
            
        printf("Case #%d: %s\n", i+1, s);
    }
}

char *calcula(int r, int l, int *f, int n)
{
    static char salida[102];
    salida[0] = 0;
    int p[101], p2[101];
    int i, i1, j, k, aux;
    
    if (f[0]%2 == 0 && f[0]/2 <= n)
    {
        if (r)
        {
            p[0]=f[0]/2;
            p[1]=2;
        }
        else
        {
            p[0]=2;
            p[1]=f[0]/2;
        }
    }
    else
    {
        i=3;
        while(1)
        {
            if (f[0]%i == 0 && f[0]/i <= n)
            {
                if (r)
                {
                    p[0]=f[0]/i;
                    p[1]=i;
                }
                else
                {
                    p[0]=i;
                    p[1]=f[0]/i;
                }
                break;
            }
            i+=2;
        }
    }
    
    for (i=1; i< l; i++)
    {
        if (f[i]%p[i])
            return salida;
        
        p[i+1] = f[i]/p[i];
    }
    
    memcpy(p2, p, sizeof(int) * (l+1));
    
    int c;
    
    for (i=1, i1=1; i< l+1; i++)
    {
        c=0;
        for (j=0; j<i1; j++)
        {
            if (p2[j]==p2[i])
            {
                c=1;
                break;
            }
                
            if (p2[j]>p2[i])
            {
                c=2;
                break;
            }
        }
        
        if (c==0)
        {
            i1++;
            continue;
        }
        
        if (c==1)
            continue;
            
        aux = p2[i];
        for (k=i1; k>j; k--)
            p2[k] = p2[k-1];
        p2[j]=aux;
        i1++;
    }
    
    for (i=0; i< l+1; i++)
    {
        for (j=0; j< 26; j++)
        {
            if (p2[j]==p[i])
            {
                salida[i] = 'A'+j;
                break;
            }
        }
    }

    salida[l+1]=0;
    return salida;
}