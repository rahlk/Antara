#include <stdio.h>
#include <math.h>


int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int liczba, kwota1=0, kwota2=0;
        scanf("%d", &liczba);
        int pomocnicza=liczba;
        int ilosc_cyfr=1;
        int ile_czworek=0;
        pomocnicza=pomocnicza/10;
        while(pomocnicza>0){
            pomocnicza=pomocnicza/10;
            ilosc_cyfr++;
        }
        int liczba_c[ilosc_cyfr];
        int czek1[ilosc_cyfr];
        int czek2[ilosc_cyfr];
        int pomoc;
        for(int j=ilosc_cyfr-1; j>=0; j--){
            pomoc=liczba%10;
            //printf("%d ", pomoc);
            liczba_c[j]=pomoc;
            //printf("%d\n", liczba_c[j]);
            liczba=(liczba-pomoc)/10;
            czek2[j]=-1;
        }
        for(int j=0; j<ilosc_cyfr; j++){
            czek1[j]=liczba_c[j];
            if(liczba_c[j]==4){
                czek2[j]=2;
                czek1[j]=2;
                ile_czworek++;
            }
            else if(ile_czworek>0){
                czek2[j]=0;
            }
        }
        for(int j=0; j<ilosc_cyfr; j++){
            kwota1=kwota1+czek1[j]*ceil(pow(10,ilosc_cyfr-j-1));
            //printf("%d\n", kwota1);
            if(czek2[j]!=-1){
                kwota2=kwota2+czek2[j]*ceil(pow(10,ilosc_cyfr-j-1));
            }
        }
        printf("Case #%d: %d %d\n", (i+1),kwota1, kwota2);

    }
    return 0;
}
