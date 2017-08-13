#include <bits/stdc++.h>
#define read() freopen("input", "r", stdin)
using namespace std;

int main(void)
{
	read();
	int n;
	cin >> n;
	n *= n;
	
	vector<int> v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	for(int i = 0; i < n; i++){
		cout << v[i];
		if(i < n - 1)
			cout << " ";
	}
	cout << endl;

	return 0;
}
