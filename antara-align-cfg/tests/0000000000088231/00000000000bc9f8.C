#include <stdio.h>

char s0[1024], s1[1024];

int main()
{
	int count, cas, i;
	char *pp;
	cas = 0;
    scanf("%d", &count);
    while (count--)
    {
        scanf("%s", s0);
        pp = s1;
        for (i=0; s0[i]; i++)
        {
        	if (s0[i] == '4')
        	{
        		s0[i]--;
        		*(pp++) = '1';
        	}
        	else if (pp != s1)
        	{
        		*(pp++) = '0';
        	}
        }
        *pp = 0;
        printf("Case #%d: %s %s\n", ++cas, s0, s1);
    }
    return 0;
}