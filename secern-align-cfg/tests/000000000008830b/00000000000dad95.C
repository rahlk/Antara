#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int check[10010], cypertext[110], result[110];
int tcn, n, l, k;
vector<int> prime_number, answer_prime_number;
void find_prime_number() {
	int a[10010];
	for (int i = 2; i <= 10000; i++) {
		if (a[i] != 1) {
			prime_number.push_back(i);
			for (int j = i + i; j <= 10000; j += i) {
				a[j] = 1;
			}
		}
	}
}
void get_input() {
	scanf("%d %d", &n, &l);
	for (int i = 1; i <= l; i++) {
		scanf("%d", &cypertext[i]);
	}
}
int find_prime_divider(int a) {
	for (int i = 0; i < prime_number.size(); i++) {
		if (a%prime_number[i] == 0) {
			return prime_number[i];
		}
	}
	return 3;
}
int find_same_value(int a, int b, int c, int d) {
	if (a == c || a == d) return a;
	return b;
}
void answer_add(int a) {
	if (check[a] == 0) {
		answer_prime_number.push_back(a);
		check[a] = 1;
	}
}
void find_plaintext() {
	int x = find_prime_divider(cypertext[1]);
	int y = cypertext[1] / x;
	int k;
	answer_add(x);
	answer_add(y);
	for (int i = 2; i <= l; i++) {
		k = find_prime_divider(cypertext[i]);
		result[i] = find_same_value(x, y, k, cypertext[i]/k);
		if (i == 2) result[1] = x + y - result[i];
		x = k;
		y = cypertext[i] / k;
		answer_add(x);
		answer_add(y);
	}
	result[l + 1] = x + y - result[l];
}
void print_to_char() {
	for (int i = 1; i <= l + 1; i++) {
		for (int j = 0; j < answer_prime_number.size(); j++) {
			if (result[i] == answer_prime_number[j]) {
				printf("%c", j + 65);
				break;
			}
		}
	}
	printf("\n");
}
void init() {
	answer_prime_number.clear();
	for (int i = 3; i <= 10000; i += 2) check[i] = 0;
}
int main() {
	find_prime_number();
	scanf("%d", &tcn);
	for (int tc = 1; tc <= tcn; tc++) {
		get_input();
		find_plaintext();
		sort(answer_prime_number.begin(), answer_prime_number.end());
		printf("Case #%d: ", tc);
		print_to_char();
		init();
	}
}