#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	if(n >= 1)
		cout << (n * (n + 1)) / 2 << endl;
	else{
		n *= -1;
		cout << - ((n * (n + 1)) / 2) + 1 << endl;
	}

	return 0;
}
