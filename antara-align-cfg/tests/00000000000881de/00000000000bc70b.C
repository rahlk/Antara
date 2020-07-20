#include <stdio.h>
#include <stdlib.h>

unsigned long * readBits(unsigned long * arr, int n) {
    char c;
    long i;
    for(i=0;i<n;i++)
    {
        if(!((i)%64))arr[i/64]=0;
        arr[i/64]<<=1;
        while((c=(char)getchar())!='0'&&c!='1'){}
        arr[i/64]+=c-'0';
    }
    arr[i/64]<<= ((i-1)/64+1)*64 - i;
    return arr;
}

unsigned long * printBits(unsigned long * arr, int n) {
    long i;
    for(i=0;i<n;i++)
    {
        // if(!(i%8)) if(!(i%64)) putchar('\n'); else putchar(' ');//DEBUG, HUMAN READABLE
        putchar('0'+(arr[i/64]>>(63-i%64))%2);
    }
    putchar('\n');
    fflush(stdout);
    return arr;
}

int process(int iter)
{
    int n, b, f;
    long i;
    scanf("%d %d %d", &n, &b, &f);
    /*
    readBits(bin, n);
    printBits(bin, n);*/
    //STAGE 1: how many brokens in each 16 bit part
    unsigned long next[16]; for(i=0;i<16;i++)next[i]=0xffff0000ffff0000;
    printBits(next, n);
    unsigned long in[16];
    readBits(in, n-b);
    int brokens[64], breakpoints[64], j = 0, count = 1, sumbrokens = 0;
    breakpoints[0] = 0;
    for(i=1;i<n-b;i++) {
        if ( ((in[i/64]>>(63-i%64))%2) == ((in[(i-1)/64]>>(63-(i-1)%64))%2) ) {
            count++;
        } else {
            brokens[j] = 16 - count;
            sumbrokens += brokens[j++];
            breakpoints[j] = i;
            count = 1;
        }
    }
    brokens[j] = b - sumbrokens;

    // for(int k =0;k<=j;k++) printf("%d ", brokens[k]); puts("");
    // for(int k =0;k<=j;k++) printf("%d ", breakpoints[k]); puts("");

    //STAGE 2: analyze 16 bit parts
    unsigned long in1[16], in2[16], in3[16], in4[16];
    for(i=0;i<16;i++)next[i]=0x5555555555555555;//0101010101...
    printBits(next,n); readBits(in4, n-b);
    for(i=0;i<16;i++)next[i]=0x3333333333333333;//0011001100...
    printBits(next,n); readBits(in3, n-b);
    for(i=0;i<16;i++)next[i]=0x0f0f0f0f0f0f0f0f;//0000111100...
    printBits(next,n); readBits(in2, n-b);
    for(i=0;i<16;i++)next[i]=0x00ff00ff00ff00ff;//0000000011...
    printBits(next,n); readBits(in1, n-b);
    
    // printBits(in4, n-b);printBits(in3, n-b);printBits(in2, n-b);printBits(in1, n-b);

    j=1;
    long prev = 0;
    long val;
    for(i=0;i<=n-b;i++) {
        // val = 0;   val += ((in1[i/64]>>(63-i%64))%2);
        // val <<= 1; val += ((in2[i/64]>>(63-i%64))%2);
        // val <<= 1; val += ((in3[i/64]>>(63-i%64))%2);
        // val <<= 1; val += ((in4[i/64]>>(63-i%64))%2); 
        // printf("i=%ld -> %d%d%d%d = %ld\n", i,((in1[i/64]>>(63-i%64))%2),((in2[i/64]>>(63-i%64))%2),((in3[i/64]>>(63-i%64))%2),((in4[i/64]>>(63-i%64))%2),val);
        if (i==n-b) val = n; else
        val = (((((in1[i/64]>>(63-i%64))%2))*2
                +((in2[i/64]>>(63-i%64))%2))*2
                +((in3[i/64]>>(63-i%64))%2))*2
                +((in4[i/64]>>(63-i%64))%2)
                +(j-1)*16;

        if (val - prev > 1) {
            prev++;
            printf("%ld ", prev);
            i--;
        } else {
            prev = val;
        }

        if (i == breakpoints[j]-1) j++;
    }
    printf("\n");fflush(stdout);
}

int main()
{
	int t, status;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		process(i);
        scanf("%d", &status);
        if(status!=1){
            printf("Wrong Answer\n");fflush(stdout);
            return 0;
        }
    }
	return 0;
}
