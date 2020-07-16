#include <stdio.h>
#include <string.h>
void quick_sort(int *a, int left, int right) {
	int i, j, x, y;
	
	i = left;
	j = right;
	x = a[(left + right) / 2];
	
	while(i <= j) {
		while(a[i] < x && i < right) {
			i++;
		}
		while(a[j] > x && j > left) {
			j--;
		}
		if(i <= j) {
			y = a[i];
			a[i] = a[j];
			a[j] = y;
			i++;
			j--;
		}
	}
	
	if(j > left) {
		quick_sort(a, left, j);
	}
	if(i < right) {
		quick_sort(a, i, right);
	}
}
void p(int *a, int n)
{
	int i=2;
	while(i < n){
		if(n%i == 0){
			a[i] = i;
			i = i+1;
		}
		else
			i = i+1;
	}
	
}
int main()
{
	int t,n,l,i,j=0,k;
	scanf("%d",&t);
	while(t > 0){
	scanf("%d %d",&n,&l);
	int a[l];
	int c[l*2];
	//int aux;
	int d[l+1];
	int e[26];
	int f[l*2];
	char str[l+1];
	memset (str,0,l+1);
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	int count = 0;
	while(j < l)
	{
		i=2;
		while(i < a[j])
		{
			if(a[j]%i == 0){
				c[count] = i;
				i = i+1;
				count++;
			}
			else
				i = i+1;
		}	
		j++;
	}
	for(i=0;i<l*2;i++)
	{
		f[i] = c[i];
	}
	
	int algo = l*2;
	for (i=0;i<algo;i++)
	{
		for(j=i+1;j<algo;)
		{
			if(f[j] == f[i])
			{
				for(k = j; k< algo;k++)
					f[k] = f[k+1];
				algo--;
			}
			else
			{
				j++;
			}
		}
	}
	for(i= 0 ; i < 26 ;i++)
	{
		e[i] = f[i];
	}
	algo = l*2;
	for (i=1; i < algo-1 ; i++)
	{
		while(c[i] == 0){
			i = i+1;}
		count = 0;
		//printf("I:%d %d\n",i,c[i]);
		int var = c[i];
		j = i+1;
		while (count != 1)
		{
			if(var == c[j])
			{
				//printf("J1:%d\n",c[j]);
				c[j] = 0;
				//printf("J2:%d\n",c[j]);
				count = 1;
			}
			else
				j++;
		}
	}
	i = 0;
	j = 0;
	while(j < l+1){
		if(c[i] != 0)
		{
			d[j] = c[i];
			i++;
			j++;
		}
		else
		{
			i++;
		}
	}
	
	quick_sort(e,0,25);
	/*for(i=0;i<26;i++)
	{
		printf("E:%d\n",e[i]);
	}
	printf("F:%d\n",e[0]);*/
	int conc = 0;
	i=0;
	while(conc < l+1)
	{
		j=0;
		int var = d[i];
		while(e[j] != var)
		{
			j++;
		}
		if(j == 0)
		{
			str[i] = 'A';
		}
		else if(j==1)
		{
			str[i] = 'B';
		}
		else if(j==2)
		{
			str[i] = 'C';
		}
		else if(j==3)
		{
			str[i] = 'D';
		}
		else if(j==4)
		{
			str[i] = 'E';
		}
		else if(j==5)
		{
			str[i] = 'F';
		}
		else if(j==6)
		{
			str[i] = 'G';
		}
		else if(j==7)
		{
			str[i] = 'H';
		}
		else if(j==8)
		{
			str[i] = 'I';
		}
		else if(j==9)
		{
			str[i] = 'J';
		}
		else if(j==10)
		{
			str[i] = 'K';
		}
		else if(j==11)
		{
			str[i] = 'L';
		}
		else if(j==12)
		{
			str[i] = 'M';
		}
		else if(j==13)
		{
			str[i] = 'N';
		}
		else if(j==14)
		{
			str[i] = 'O';
		}
		else if(j==15)
		{
			str[i] = 'P';
		}
		else if(j==16)
		{
			str[i] = 'Q';
		}
		else if(j==17)
		{
			str[i] = 'R';
		}
		else if(j==18)
		{
			str[i] = 'S';
		}
		else if(j==19)
		{
			str[i] = 'T';
		}
		else if(j==20)
		{
			str[i] = 'U';
		}
		else if(j==21)
		{
			str[i] = 'V';
		}
		else if(j==22)
		{
			str[i] = 'W';
		}
		else if(j==23)
		{
			str[i] = 'X';
		}
		else if(j==24)
		{
			str[i] = 'Y';
		}
		else
		{
			str[i] = 'Z';
		}
		i++;
		conc ++;
	}
	/*for(i=0;i<l+1;i++)
	{
		printf("D:%d\n",d[i]);
	}*/
	//printf("SSSSSSSSSS %c\n",str[l]);
	printf("Case #%d: ",t);
	for(i=0;i<l+1;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
	t--;
	}
}


