#include <stdio.h>
#include <ctype.h>
#include <algorithm>
#include <string.h>
#include <stdexcept>

const int MAXDIG = 200;
struct dbigint
{
	char digits[MAXDIG];
	int first;
	
	dbigint()
	{
		for (int i = 0; i != MAXDIG; i++) digits[i] = 0;
		first = MAXDIG - 1;
	}
	
	void advfirst()
	{
		while (first < MAXDIG && !digits[first]) ++first;
	}
	
	void read()
	{
		char temp[MAXDIG], *tempp = temp, c;
		while (isdigit(c = getchar()))
			*tempp++ = c;
		
		first = MAXDIG - (tempp - temp);
		int i;
		for (i = 0; i != first; i++) digits[i] = 0;
		tempp = temp;
		for (; i != MAXDIG; i++) digits[i] = *tempp++ - '0';
		advfirst();
	}
	
	void print() const
	{
		for (int i = first; i != MAXDIG; i++) putchar(digits[i] + '0');
		if (first == MAXDIG) putchar('0');
#ifdef T_5
		printf("{%i}", first);
#endif
	}
	
	bool operator< (const dbigint &other) const
	{
		int start = std::min(first, other.first);
#ifndef T_4
		return memcmp(digits + start, other.digits + start,
		               MAXDIG - start) < 0;
#else
		int x = memcmp(digits + start, other.digits + start,
		               MAXDIG - start) < 0;
		putchar('[');
		print();
		printf(x ? "<" : "!<");
		other.print();
		printf("(%i)]", MAXDIG - start);
		return x;
#endif
	}
	
	
	bool operator== (const dbigint &other) const
	{
		int start = std::min(first, other.first);
		return memcmp(digits + start, other.digits + start,
		               MAXDIG - start) == 0;
	}
	
	bool operator!= (const dbigint &other) const {return !(*this == other);}
	
	bool operator<= (const dbigint &other) const
	{
		int start = std::min(first, other.first);
		return memcmp(digits + start, other.digits + start,
		               MAXDIG - start) <= 0;
	}
	
	bool operator> (const dbigint &other) const {return !(*this <= other);}
	bool operator>= (const dbigint &other) const {return !(*this < other);}
	
	const dbigint& operator -= (const dbigint& other)
	{
		int borrow = 0;
		for (int i = MAXDIG; --i >= first; )
		{
			int r = digits[i] - other.digits[i] - borrow;
			borrow = r < 0;
			digits[i] = r + borrow * 10;
		}
		if (other.first < first || borrow)
			throw std::logic_error("Subtraction to negative");
		advfirst();
	}
	
	const dbigint& operator++ ()
	{
		int i = MAXDIG - 1;
		while (++digits[i] == 10)
		{
			digits[i] = 0;
			if (--i < 0) throw std::logic_error("Overflow ++");
		}
		if (i < first) first = i;
	}
	
	bool even() const {return digits[MAXDIG - 1] & 1 ^ 1;}
	bool zero() const {return first == MAXDIG;}
	explicit operator bool () const {return !zero();}
	
	void halve()
	{
		int temp = 0;
		for (int i = first; i != MAXDIG; i++)
		{
			temp += digits[i];
			digits[i] = temp >> 1;
			temp = (temp & 1) * 10;
		}
		advfirst();
#ifdef T_1
		print(); putchar('-');
#endif
	}
	
	void doublev()
	{
		int x = 0, carry = 0;
		for (int i = MAXDIG - 1; i >= first; i--)
		{
			x = carry + 2 * digits[i];
			carry = x >= 10;
			digits[i] = x - 10 * carry;
		}
		if (carry)
		{
			if (!first) throw std::logic_error("Overflow doublev");
			digits[--first] = carry;
		}
	}
	
	int rephalve()
	{
		int n = 0;
		if (zero()) return 0;
		while (even()) halve(), ++n;
		return n;
	}
	
	bool multten() const
	{
		return !digits[MAXDIG - 1];
	}
	
	void divten()
	{
		int i;
		for (i = MAXDIG; --i > first; ) digits[i] = digits[i - 1];
		digits[i] = 0;
		if (first < MAXDIG) ++first;
	}
	
	void timesten()
	{
		if (!first) throw std::logic_error("Overflow timesten");
		for (int i = first; i != MAXDIG; i++) digits[i - 1] = digits[i];
		digits[MAXDIG - 1] = 0;
		--first;
	}
};

dbigint gcd(dbigint a, dbigint b)
{
	int halves = std::min(a.rephalve(), b.rephalve());
	while (a && b)
	{
#ifdef T_1
		putchar('('); a.print(); putchar('|'); b.print(); puts(")");
		 fflush(stdout);
#endif
		if (a < b) std::swap(a, b);
		a -= b;
#ifdef T_1
		a.print(); putchar(':');
#endif
		a.rephalve();
	}
	while (halves--) b.doublev();
	return b;
}

dbigint exactdivp(dbigint a, dbigint b)
{
#ifdef T_0
	putchar('('); a.print(); putchar('/'); b.print(); putchar(')');
	 fflush(stdout);
#endif
	if (!b) throw std::logic_error("Divide by zero");
	if (b.first == MAXDIG - 1 && b.digits[MAXDIG - 1] == 2)
		{a.halve(); return a;}
	if (b.first == MAXDIG - 1 && b.digits[MAXDIG - 1] == 5)
		{a.doublev(); a.divten(); return a;}
	dbigint result;
	int place = MAXDIG - 1;
	while (1)
	{
		while (!a.multten())
			{a -= b; ++(result.digits[place]);
#ifdef T_0
				a.print(); putchar(' ');
#endif
			}
		if (!a) break;
		a.divten(); --place;
#ifdef T_0
		a.print(); putchar(' ');
#endif
	}
	result.first = place;
#ifdef T_0
	putchar('\n');
#endif
	return result;
}

int main(int argc, char **argv)
{
	unsigned long int no_cases, case_no;
	scanf("%lu%*c", &no_cases);
	for (case_no = 0; case_no != no_cases; case_no++)
	try
	{
		int l, x;
		dbigint ciph[100], primes[101], primesd[101];
		while (getchar() != ' ') {}
		scanf("%i%*c", &l);
		
		for (int i = 0; i != l; i++) ciph[i].read();
		x = 0;
		while (ciph[x] == ciph[x + 1]) {}
		primes[x + 1] = gcd(ciph[x], ciph[x + 1]);
		for (int i = x; i >= 0; i--)
			primes[i] = exactdivp(ciph[i], primes[i + 1]);
		for (int i = x + 1; i != l; i++)
			primes[i + 1] = exactdivp(ciph[i], primes[i]);
		
#ifdef T_2
		for (int i = 0; i <= l; i++)
			primes[i].print(), putchar(' ');
		putchar('\n');
#endif
		for (int i = 0; i <= l; i++) primesd[i] = primes[i];
		std::sort(primesd, primesd + l + 1);
#ifdef T_3
		for (int i = 0; i <= l; i++)
			primesd[i].print(), putchar(' ');
		putchar('\n');
#endif
		{
			auto s = std::unique(primesd, primesd + l + 1);
			for (auto p = primesd; p != s; p++)
				p->print(), putchar(',');
			putchar('\n');
			if (s != primesd + 26)
				throw std::logic_error("Not 26 primes");
		}
		
		printf("Case #%lu: ", case_no + 1);
		for (int i = 0; i <= l; i++)
			putchar('A' + (std::lower_bound(primesd, primesd + 26,
			    primes[i]) - primesd));
		putchar('\n');
	}
	catch (std::logic_error x)
	{
		puts(x.what());
	}
	return 0;
}
