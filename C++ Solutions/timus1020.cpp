#include <bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;

int main(void)
{
	int n;
	double r;
	cin >> n >> r;

	vector<double> x(n), y(n);
	for(int i = 0; i < n; i++)
		cin >> x[i] >> y[i];

	double dis = 0.0;
	for(int i = 1; i < n; i++)
		dis += sqrt(pow(x[i - 1] - x[i], 2) + pow(y[i - 1] - y[i], 2));
	dis += sqrt(pow(x[n - 1] - x[0], 2) + pow(y[n - 1] - y[0], 2));

	cout << fixed << setprecision(2) << 2 * pi * r + dis << endl;

	return 0;
}
