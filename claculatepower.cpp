#include <bits/stdc++.h>
using namespace std;

long power(int x, unsigned n)
{
	long long pow = 1;

	for (int i = 0; i < n; i++) {
		pow = pow * x;
	}

	return pow;
}

int main(void)
{

	int x = 2;
	unsigned n = 3;

	int result = power(x, n);
	cout << result << endl;

	return 0;
}
