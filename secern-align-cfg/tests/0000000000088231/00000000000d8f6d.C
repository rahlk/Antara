// Problem_A.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>  // includes cin to read from stdin and cout to write to stdout
using namespace std;  // since cin and cout are both in namespace std, this saves some text

#define MAX_DIGITS			(200)

void main() {
	int _T;

	cin >> _T;  // read T. cin knows that t is an int, so it reads it as such.
	for (int i = 1; i <= _T; ++i) {
		char _In[MAX_DIGITS] = { 0, };
		char _Out_1[MAX_DIGITS] = { 0, };
		char _Out_2[MAX_DIGITS] = { 0, };

		cin >> _In;  // read _In
		int first_4_idx = -1;
		for (int j = 0; _In[j]; j++) {
			if (_In[j] == '4') {
				_Out_1[j] = '2';
				_Out_2[j] = '2';
				if (first_4_idx == -1){
					first_4_idx = j;
				}
			} else { 
				_Out_1[j] = _In[j];
				_Out_2[j] = '0';
			}

		}

		cout << "Case #" << i << ": " << _Out_1 << " "<< (_Out_2 + first_4_idx);
		cout << endl;
	}
}
