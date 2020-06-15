#include <bits/stdc++.h>

using namespace std;

#define SQ(a) (a)*(a)
#define ll long long
#define REP(i, a, b) for (int i = a; i < b; ++i)
#define vi vector<int>

void decode() {
	int x, y;
	cin >> x >> y;
	int n1 = (y - (x * 2)) / 2;
	int n2 = (y - (n1 * 4)) / 2;
	cout << n2 << " " << n1 << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	scanf("%d", &t);
	while(t--) {
		decode();
	}
	return 0;
}
