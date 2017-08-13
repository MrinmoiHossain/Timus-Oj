#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	int s = (a + b) - 1; //both shot a common
	
	cout << s - a << " " << s - b << endl;

	return 0;
}
