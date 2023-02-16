#include <bits/stdc++.h>
using namespace std;

unsigned long long z(unsigned long long n) {
	int cnt = 5, res = 0;
	while(cnt <= n) {
		res += n/cnt;
		cnt *= 5;
	}
	return res;
}

int main() {
	ios_base:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int tc; cin >> tc;
	unsigned long long n;
	while(tc--) {
		cin >> n;
		cout << z(n);
		if(tc >= 1) cout << endl;
	}
}