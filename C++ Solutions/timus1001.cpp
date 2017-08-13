#include <bits/stdc++.h>
typedef long long int ll;
#define read() freopen("input", "r", stdin)
using namespace std;

int main(void)
{
	ll n;

	vector<double> v;
	while(cin >> n){
		v.push_back(sqrt(n));
	}
	reverse(v.begin(), v.end());

	for(int i = 0; i < v.size(); i++)
		cout << fixed << setprecision(4) << v[i] << endl;

	return 0;
}
