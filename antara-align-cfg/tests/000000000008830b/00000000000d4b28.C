#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void dupRemv(int arr[], int n)
{
    int j = 0;
    for (int i=0; i < n-1; i++){
        if (arr[i] != arr[i+1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[n-1];
}


//0 => A
char intToAlphabet(int i)
{
   return static_cast<char>('A'+ i);
}
//N is length of ciphertext
//L is max prime number
void toPlaintext(int cipher[], int L, int N){
    int fprime;
    int pList[N+10], tpList[N+10];

    for(int i = 3;i <= L;i += 2){
        if(cipher[0] % i == 0)
            fprime = i;

        if(cipher[1] % fprime == 0){
            pList[0] = cipher[0]/fprime;
            pList[1] = fprime;
        }
        else{
            pList[0] = fprime;
            pList[1] = cipher[0]/fprime;
        }
    }

    for(int j = 2;j <= N;++j){
        pList[j] = cipher[j-1]/pList[j-1];
    }
    copy(pList,pList+N+1, tpList);

    sort(pList, pList+N+1);

    dupRemv(pList, N+1);

    for(int k = 0;k < N+1;++k){
        for(int x = 0;x < 26;++x){
            if(tpList[k] == pList[x]){
                cout << intToAlphabet(x);
                //ptext += intToAlphabet(x);
            }

        }
    }
}


int main(){
    /*int L = 103, N = 31;
    int cipher[N] = {217, 1891, 4819, 2291, 2987, 3811, 1739, 2491, 4717, 445, 65, 1079, 8383, 5353, 901, 187, 649, 1003, 697, 3239, 7663, 291, 123, 779, 1007, 3551, 1943, 2117, 1679, 989, 3053};
    toPlaintext(cipher, L, N);*/
    int T, L, N;
    cin >> T;
    for(int i=1;i<=T;++i){
        cin >> L >> N;
        int cipher[N+10];
        for(int j=0;j<N;++j){
            cin >> cipher[j];
        }
        cout << "Case #" << i << ": ";
        toPlaintext(cipher, L, N);
        cout << '\n';
    }
    return 0;
}
