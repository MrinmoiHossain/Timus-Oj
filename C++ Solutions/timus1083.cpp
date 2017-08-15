#include <bits/stdc++.h>
using namespace std;

int fact(int n, int k);

int main(void)
{
	int n;
	cin >> n;
	string s;
	cin >> s;

	cout << fact(n, s.length()) << endl;

	return 0;
}

int fact(int n, int k)
{
	if(n <= 0)
		return 1;
	return n * fact(n - k, k);
}
