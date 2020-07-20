#include <stdio.h>
 
int check_anagram(char [], char []);
 
int main()
{
  char  b[100],pass[1000],string[1000];
  int n,i,j,k,a,cnt;
 scanf("%d",&n);
 for(j=0; j<n; j++)
			{
				i=0;
				scanf("%d", &a);
				char pass[n][11], string[2000];
				for(k=0; k<a; k++)
					scanf("%s", pass[k]);
				scanf("%s", string);

 
  for(k=0;k<a;k++)
  {
  	if (check_anagram(pass[k],string) == 1)
    {
    	cnt++;
    printf("%d",cnt);
	}
  else
    printf("0");
 
  }
}
  return 0;

}
 
int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c=0;
 
  // Calculating frequency of characters of first string
 
  while (a[c] != '\0')
  {
    first[a[c]-'a']++;
    c++;
  }
 
  c = 0;
 
  while (b[c] != '\0')
  {
    second[b[c]-'a']++;
    c++;
  }
 
  // Comparing frequency of characters
 
  for (c = 0; c < 26; c++)
  {
    if (first[c] != second[c])
      return 0;
  }
 
  return 1;
}

