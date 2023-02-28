#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ull                 unsigned long long LL
#define md                  10000007
#define pb                  push_back
#define mp                  make_pair
#define pp                  pair<LL,LL>
#define nline "\n"
void solve() {
	int n;
	cin >> n;
	vector<int>a(n + 1, 0);
	vector<int>dif(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		dif[i] = a[i] - a[i - 1];
	}
	int q;
	cin >> q;
	while (q--) {
		int x, y, val;
		cin >> x >> y >> val;
		dif[x] += val;
		dif[y + 1] -= val;
	}
	for (int i = 1; i <= n; i++) {
		a[i] = dif[i] + a[i - 1];
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << " ";
	}
	cout << nline;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	for (int i = 1; i <= t; i++) {
		//cout<<"Case "<<i<<": ";
		solve();
	}
	return 0;
}
