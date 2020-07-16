#include <iostream>
#include <cstdio>

using namespace std;
string fillLeadingZero(int value, unsigned int size)
{
	char intStr[11];
	snprintf(intStr,10, "%d", value);
	string strValue = intStr;

	while (strValue.length() < size) {
		strValue = "0" + strValue;
	}

	return strValue;
}

bool isContain4(int value)
{
	char intStr[11];
	snprintf(intStr, 10, "%d", value);
	string strValue = intStr;
	
	for (int i = 0; i < strValue.length();i++) {
		if (strValue.at(i) == '4')
			return true;
	}

	return false;
}


class BigInt {
public:
	int value[30];
	int maxLen;
	BigInt(string intValue) {
		string tempValue = intValue;
		while (tempValue.length() % 10 != 0) {
			tempValue = "0" + tempValue;
		}
		maxLen = tempValue.length() / 10;
		for (int i = maxLen - 1; i >= 0; i--) {
			value[i] = atoi(tempValue.substr((maxLen - 1 - i) * 10, 10).c_str());
		}

		for (int i = maxLen; i < 30; i++) {
			value[i] = 0;
		}
	}
	void print() {
		for (int i = maxLen - 1; i >= 0; i--) {
			if (value[i] < 1000000000 &&  i != maxLen - 1) {
				cout << fillLeadingZero(value[i], 10);
			}
			else
				cout << value[i];
		}
		//cout << endl;
	}
	void increment() {
		int counter = 0;
		value[counter]++;

		while (value[counter] > 999999999 && counter < maxLen - 1) {
			value[counter] = value[counter] - 1000000000;
			counter++;
			value[counter]++;
		}

		if (value[maxLen - 1] > 1000000000) {
			value[maxLen - 1] = value[maxLen - 1] - 1000000000;
			maxLen++;
			value[maxLen - 1] = 1;
		}
	}
	void decrement() {
		int counter = 0;
		value[counter]--;

		while (value[counter] < 0 && counter < maxLen) {
			value[counter] = 999999999;
			counter++;
			value[counter]--;
		}
		
		if (value[maxLen - 1] <= 0) {
			maxLen--;
		}
	}

	bool isContainsFour() {
		for (int i = 0; i < maxLen; i++) {
			if (isContain4(value[i]))
				return true;
		}

		return false;
	}

	string sum(BigInt argument) {
		int sumValue[30];
		int sumMinLen = maxLen > argument.maxLen ? argument.maxLen : maxLen;
		int sumMaxLen = maxLen < argument.maxLen ? argument.maxLen : maxLen;
		int carry = 0;
		for (int i = 0; i < sumMinLen; i++) {
			//carry = 0;
			sumValue[i] = value[i] + argument.value[i] + carry;
			carry = 0;
			if (sumValue[i] > 999999999) {
				carry = 1;
				sumValue[i] = sumValue[i] - 1000000000;
			}
		}
		int *bigNumber = maxLen > argument.maxLen ? argument.value : value;
		for (int i = sumMinLen; i < sumMaxLen; i++) {
			sumValue[i] = bigNumber[i] + carry;
			carry = 0;
			if (sumValue[i] > 999999999) {
				carry = 1;
				sumValue[i] = sumValue[i] - 1000000000;
			}
		}

		if (carry == 1) {
			sumValue[sumMaxLen] = 1;
			sumMaxLen++;
		}

		string sumStr = "";

		for (int i = sumMaxLen - 1; i >= 0; i--) {
			string tmpVal;
			if (value[i] < 1000 && i != maxLen - 1) {
				tmpVal = fillLeadingZero(sumValue[i], 4);
			}
			else {
				char tmpBuff[15];
				snprintf(tmpBuff, 15, "%d", sumValue[i]);
				tmpVal = tmpBuff;
			}
				
			sumStr = sumStr + tmpVal;
		}

		return sumStr;
	}
};

int main()
{
	string input, sumValue;
	int N, caseN = 1;
	cin >> N;

	while (N--) {
		cin >> input;
		BigInt numPair1(input), numPair2("1");
		numPair1.decrement();
		sumValue = numPair1.sum(numPair2);
		while (numPair1.isContainsFour() || numPair2.isContainsFour() || sumValue != input) {
			numPair1.decrement();
			numPair2.increment();
			sumValue = numPair1.sum(numPair2);
		}

		cout << "Case #"<<caseN<<": ";
		numPair1.print();
		cout << " ";
		numPair2.print();
		cout << endl;
	}



	return 0;
}
#include <iostream>
#include <cstdio>

using namespace std;
string fillLeadingZero(int value, unsigned int size)
{
	char intStr[11];
	snprintf(intStr,10, "%d", value);
	string strValue = intStr;

	while (strValue.length() < size) {
		strValue = "0" + strValue;
	}

	return strValue;
}

bool isContain4(int value)
{
	char intStr[11];
	snprintf(intStr, 10, "%d", value);
	string strValue = intStr;
	
	for (int i = 0; i < strValue.length();i++) {
		if (strValue.at(i) == '4')
			return true;
	}

	return false;
}


class BigInt {
public:
	int value[30];
	int maxLen;
	BigInt(string intValue) {
		string tempValue = intValue;
		while (tempValue.length() % 10 != 0) {
			tempValue = "0" + tempValue;
		}
		maxLen = tempValue.length() / 10;
		for (int i = maxLen - 1; i >= 0; i--) {
			value[i] = atoi(tempValue.substr((maxLen - 1 - i) * 10, 10).c_str());
		}

		for (int i = maxLen; i < 30; i++) {
			value[i] = 0;
		}
	}
	void print() {
		for (int i = maxLen - 1; i >= 0; i--) {
			if (value[i] < 1000000000 &&  i != maxLen - 1) {
				cout << fillLeadingZero(value[i], 10);
			}
			else
				cout << value[i];
		}
		//cout << endl;
	}
	void increment() {
		int counter = 0;
		value[counter]++;

		while (value[counter] > 999999999 && counter < maxLen - 1) {
			value[counter] = value[counter] - 1000000000;
			counter++;
			value[counter]++;
		}

		if (value[maxLen - 1] > 1000000000) {
			value[maxLen - 1] = value[maxLen - 1] - 1000000000;
			maxLen++;
			value[maxLen - 1] = 1;
		}
	}
	void decrement() {
		int counter = 0;
		value[counter]--;

		while (value[counter] < 0 && counter < maxLen) {
			value[counter] = 999999999;
			counter++;
			value[counter]--;
		}
		
		if (value[maxLen - 1] <= 0) {
			maxLen--;
		}
	}

	bool isContainsFour() {
		for (int i = 0; i < maxLen; i++) {
			if (isContain4(value[i]))
				return true;
		}

		return false;
	}

	string sum(BigInt argument) {
		int sumValue[30];
		int sumMinLen = maxLen > argument.maxLen ? argument.maxLen : maxLen;
		int sumMaxLen = maxLen < argument.maxLen ? argument.maxLen : maxLen;
		int carry = 0;
		for (int i = 0; i < sumMinLen; i++) {
			//carry = 0;
			sumValue[i] = value[i] + argument.value[i] + carry;
			carry = 0;
			if (sumValue[i] > 999999999) {
				carry = 1;
				sumValue[i] = sumValue[i] - 1000000000;
			}
		}
		int *bigNumber = maxLen > argument.maxLen ? argument.value : value;
		for (int i = sumMinLen; i < sumMaxLen; i++) {
			sumValue[i] = bigNumber[i] + carry;
			carry = 0;
			if (sumValue[i] > 999999999) {
				carry = 1;
				sumValue[i] = sumValue[i] - 1000000000;
			}
		}

		if (carry == 1) {
			sumValue[sumMaxLen] = 1;
			sumMaxLen++;
		}

		string sumStr = "";

		for (int i = sumMaxLen - 1; i >= 0; i--) {
			string tmpVal;
			if (value[i] < 1000 && i != maxLen - 1) {
				tmpVal = fillLeadingZero(sumValue[i], 4);
			}
			else {
				char tmpBuff[15];
				snprintf(tmpBuff, 15, "%d", sumValue[i]);
				tmpVal = tmpBuff;
			}
				
			sumStr = sumStr + tmpVal;
		}

		return sumStr;
	}
};

int main()
{
	string input, sumValue;
	int N, caseN = 1;
	cin >> N;

	while (N--) {
		cin >> input;
		BigInt numPair1(input), numPair2("1");
		numPair1.decrement();
		sumValue = numPair1.sum(numPair2);
		while (numPair1.isContainsFour() || numPair2.isContainsFour() || sumValue != input) {
			numPair1.decrement();
			numPair2.increment();
			sumValue = numPair1.sum(numPair2);
		}

		cout << "Case #"<<caseN<<": ";
		numPair1.print();
		cout << " ";
		numPair2.print();
		cout << endl;
	}



	return 0;
}
