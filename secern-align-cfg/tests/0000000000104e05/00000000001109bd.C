#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

typedef unsigned char bool;

int cmpfunc (const void * a, const void * b ) {
    return strcmp((const char *)a, (const char *)b);
}

void invert(char *s, char *inv)
{
    int i;
    int size = strlen(s);
    for(i = 0; i < size; i++)
        inv[i] = s[size-1-i];
    inv[size] = 0;
}

int preffix(char *a, char *b)
{
    int i;
    int sizea = strlen(a), sizeb = strlen(b);
    int size = (sizea < sizeb) ? sizea : sizeb;
    
    for(i = 0; i < size; i++)
        if(a[i] != b[i])
            break ;
    return i;
}

char words[1010][60];
int next[1010], pi[1010], pref[1010];
bool valid[1010];

int main()
{
    int T, cont = 0;
    scanf("%d\n", &T);

    while(T--)
    {
        int n, sum = 0;
        unsigned int maxsize = 0;
        int i, k;
        
        scanf("%d\n", &n);
        
        strcpy(words[0], "");
        strcpy(words[n+1], "");
        for(i = 1; i <= n; i++) 
        {
            char tmp[60];
            scanf("%s \n", tmp);
            
            invert(tmp, words[i]);
            
            maxsize = (maxsize > strlen(tmp)) ? maxsize : strlen(tmp);
        }
        
        qsort(words, n+1, 60, cmpfunc);
        
        for(i = 0; i <= n; i++)
        {
            next[i] = i+1, pi[i+1] = i;
            pref[i] = preffix(words[i], words[i+1]);
            valid[i] = true;
        }
        
        for(k = maxsize; k > 0; k--)
        {
            char last[60];
            strcpy(last, words[0]);
            for(i = 0; i < n; )
            {
                if(pref[i] >= k && (strlen(last) < k || strncmp(words[i], last, k)))
                {
                    int pi_i = pi[i];
                    int next_i = next[i];
                    valid[i] = false, valid[next_i] = false;
                    strcpy(last, words[i]);
                    
                    //printf("%s %s %d\n", words[i], words[next[i]], k);

                    next[pi_i] = next[next_i];
                    pi[next[pi_i]] = pi_i;
                    pref[pi_i] = preffix(words[pi_i], words[next[pi_i]]);
                    
                    //printf("%s %s %d\n", words[pi_i], words[next[pi_i]], pref[pi_i]);
                    
                    sum += 2;
                    i = next[pi_i];
                }
                else
                {
                    i = next[i];
                }
                
            }
        }
        
        //for(i = 0; i <= n; i++)
        //   printf("%s %d\n", words[i], pref[i]);
        //printf("\n");
        
        printf("Case #%d: %d\n", ++cont, sum);
    }
    
    return 0;
}
