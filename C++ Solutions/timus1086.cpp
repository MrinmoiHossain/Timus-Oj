#include <bits/stdc++.h>
#define MAX 1100007
using namespace std;

bool prime[MAX];
vector<int> v;

void seive()
{
	int limit = sqrt(MAX);

	prime[0] = prime[1] = 1;
	for(int i = 4; i <= MAX; i += 2) prime[i] = 1;

	v.push_back(2);
	for(int i = 3; i <= MAX; i += 2){
		if(!prime[i]){
			v.push_back(i);
			if(i <= limit)
				for(int j = i * i; j <= MAX; j += i + i)
					prime[j] = 1;
		}
	}
}

int main(void)
{
	seive();
	int T;
	cin >> T;

	for(int i = 0, n; i < T; i++){
		cin >> n;

		cout << v[n - 1] << endl;
	}

	return 0;
}
