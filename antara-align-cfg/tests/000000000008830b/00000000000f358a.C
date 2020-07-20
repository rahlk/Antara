//  main.c
//  C_stuff
//  Created by Sujay Patel on 17/02/18.
//  Copyright © 2018 Sujay Patel. All rights reserved.

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

void quicksort(int number[26],int first,int last){
    int i, j, pivot, temp;
    
    if(first<last){
        pivot=first;
        i=first;
        j=last;
        
        while(i<j){
            while(number[i]<=number[pivot]&&i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quicksort(number,first,j-1);
        quicksort(number,j+1,last);
        
    }
}


int contains(int Primes[],int size, int f2){
    for(int i = 0;i<size;i++){
        if(Primes[i] == f2)
            return 0;
    }
    return 1;
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int N,L;
        scanf("%d %d\n",&N,&L);
        int Cipher[L];
        int deCipher[L+1];
        char numbers[L];
        fgets(numbers,L,stdin);
        char *p = strtok(numbers," ");
        int k = 0;
        while (p!= NULL)
        {
            Cipher[k] = atoi(p);
            k++;
            p = strtok(NULL, " ");
        }
        
        int Primes[26];
        k = 0;
        int f1 = 0;
        int f2 = 0;
        
        for(int r = 2;r<=sqrt(Cipher[0]);r++)
            if(Cipher[0]%r == 0){
                f1 = r;
                f2 = Cipher[0]/r;
                break;
            }
        Primes[k] = f1;
        k++;
        if(contains(Primes,k,f2)==1){
            Primes[k] = (f2);
            k++;
        }
        
        if(Cipher[1]%f1 == 0){
            deCipher[0] = f2;
            deCipher[1] = f1;
            deCipher[2] = Cipher[1]/f1;
            if(contains(Primes,k,(Cipher[1]/f1))==1){
                Primes[k] = (Cipher[1]/f1);
                k++;
            }
        }
        else if(Cipher[1]%f2 == 0){
            deCipher[0] = f1;
            deCipher[1] = f2;
            deCipher[2] = Cipher[1]/f2;
            if(contains(Primes,k,(Cipher[1]/f2))==1){
                Primes[k] = (Cipher[1]/f2);
                k++;
            }
        }
        for(int j = 2; j < L; j++){
            deCipher[j+1] = Cipher[j]/deCipher[j];
            if(contains(Primes,k,deCipher[j+1])==1){
                Primes[k] = deCipher[j+1];
                k++;
            }
        }
        
        quicksort(Primes, 0, 25);
        char DeCipher[L+1];
        for(int j = 0;j<L+1;j++){
            for(int h = 0;h<26;h++){
                if(deCipher[j]==Primes[h]){
                    DeCipher[j] = (char)('A'+h);
                    break;
                }
            }
        }
        printf("Case #%d: %s",i,DeCipher);
    }
    return 0;
}
