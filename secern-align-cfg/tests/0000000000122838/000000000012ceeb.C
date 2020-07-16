#include <iostream>
#include <cstdlib>

using namespace std;

int max(int arr[], int startIndex, int endIndex) {
    int maxVal = 0;
    
    for(int i = startIndex ; i <= endIndex ; i++) {
        
        if(arr[i] > maxVal)
            maxVal = arr[i];
    }
    
    return maxVal;
}

int main()
{
    int testCases, numberOfSwords, highestDifference;
    int charles[100000], delila[100000];
    int highestCharles, highestDelila;
    int success;
    
    cin>>testCases;
    
    for(int i = 0 ; i < testCases ; i++) {
        success = 0;
        cin>>numberOfSwords;
        cin>>highestDifference;
        
        for(int j = 0 ; j < numberOfSwords ; j++)
            cin>>charles[j];
        for(int j = 0 ; j < numberOfSwords ; j++)
            cin>>delila[j];
        
        for(int i = 0 ; i < numberOfSwords ; i++) {
            for(int j = i ; j < numberOfSwords ; j++ ) {
                highestCharles = max(charles, i, j);
                highestDelila = max(delila, i, j);
                
                if(abs(highestDelila - highestCharles) <= highestDifference) {
                    success++;
                }
            }
        }
        
        cout<<"case #"<<i+1<<": "<<success<<endl;
        
    }

    return 0;
}