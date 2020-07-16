#include <iostream>
#include <string>
#include <stdio.h>
#include <math.h>
using namespace std;

// search no error checking
int search(int val, int length, const int* arr){
    /*
    int index = length/2;
    int step = length/4;
    if(step == 0){
        step =1;
    }
    while(true){
        if (val == arr[index]) {
            break;
        }
        
        if (val > arr[index]) {
            index = index + step;
            step = int(step/2+0.5);
        }
        else if (val < arr[index]) {
            index = index - step;
            step = int(step/2+0.5);
        }
        
    }
    */
   for(int index = 0; index < length; index++)
   {
       if (val == arr[index]) {
           return index;
       }
       
   }
   
    return 0;
    
}

int main(){
    int times;
    cin >> times;
    int * arr[times];
    int N_arr[times];
    int L_arr[times];
    for(int i = 0; i < times; i++)
    {
        int N;
        int L;
        cin >> N;
        cin >> L;
        N_arr[i] = N;
        L_arr[i] = L;
        int * subarr = new int[L];
        arr[i] = subarr;
        for(int j = 0; j < L; j++)
        {
            cin >> subarr[j];
        }
        
    }
    
    for(int i = 0; i < times; i++)
    {
        int N = N_arr[i];
        int L = L_arr[i];
        int * listPtr = arr[i];
        int prime[26];
        int val;
        int cur_ind = 0;
        int info[L][2];
        // build the prime list
        for(int j = 0; j < L; j++)
        {
            val = listPtr[j]; 
            if (0 == j) {
                for(int mi = 2; mi <= (int)sqrt(val); mi++)
                {
                    if (0 == val %mi){
                        int b = val/mi;
                        if (0 == listPtr[j+1]%mi) {
                            info[j][0] = b;
                            info[j][1] = mi;
                        } else
                        {
                            info[j][0] = mi;
                            info[j][1] = b;
                        }
                        prime[0] = mi;
                        prime[1] = val/mi;
                        cur_ind = 2;
                        break;
                    }
                }
            } else {
                int first = info[j-1][1];
                int second = val/first;
                info[j][0] = first;
                info[j][1] = second;
                int mi;
                int b;
                if (first > second) {
                    mi = second;
                    b = first;
                } else {
                    mi = first;
                    b = second;
                }
                bool considerI = true;
                bool considerB = true;
                        if (cur_ind == 0) {
                            prime[0] = mi;
                            prime[1] = val/mi;
                            cur_ind = 2;
                            continue;
                        } else if (cur_ind > 25){
                            continue;
                        } else if (mi> prime[cur_ind-1]) {
                            prime[cur_ind] = mi;
                            cur_ind = cur_ind+1;
                            prime[cur_ind] = b;
                            cur_ind = cur_ind+1;
                        } else {
                        if (b > prime[cur_ind-1]) {
                            prime[cur_ind] = b;
                            cur_ind = cur_ind+1;
                            considerB = false;
                        } 
                            for(int mj = 0; mj < cur_ind; mj++)
                            {
                                if (false == (considerI || considerB)) {
                                    break;
                                }
                                
                                if (considerI) {
                                    if (mi > prime[mj]) {
                                        continue;
                                    } else if (mi == prime[mj]) {
                                        considerI = false;
                                    } else if (mi < prime[mj]) {
                                        for(int mk = cur_ind; mk > mj; mk--)
                                        {
                                            prime[mk] = prime[mk-1];
                                        }
                                        cur_ind = cur_ind+1;
                                        prime[mj] = mi;
                                        considerI = false;
                                        if (cur_ind >= 25) {
                                            break;
                                        }
                                    }
                                } else if (considerB) {
                                    if (b > prime[mj]) {
                                        continue;
                                    } else if (b == prime[mj]) {
                                        considerB = false;
                                    } else if (b < prime[mj]) {
                                        for(int ml = cur_ind; ml > mj; ml--)
                                        {
                                            prime[ml] = prime[ml-1];
                                        }
                                        cur_ind = cur_ind+1;
                                        prime[mj] = b;
                                        considerB = false;
                                        if (cur_ind >= 25) {
                                            break;
                                        }
                                    }                                
                                }
                            }
                        }
            }
        }
        /*
        for(int y = 0; y < 26; y++)
        {
            cout << prime[y] << " ";
        }
        */
        
        cout << "Case #" << i+1 << ": ";
        cout << (char)(search(info[0][0], 26, prime)+65);
        for(int k = 0; k < L; k++)
        {
            cout << (char)(search(info[k][1], 26, prime)+65);
        }
        cout << endl;

        
    }
    for(int x = 0; x < times; x++)
        {
            delete arr[x];
        }

    
}