#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
typedef long long ll;
// cout<<"hey\n";
int t;
cin>>t;
while(t--)
{
  int n, m, r, c;
	cin >> n >> m >> r >> c;
	r--; c--;
	char a[n + 7][m + 7];
	bool hasB = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			hasB |= (a[i][j] == 'B');
		}
	}
  bool oneMove = false;
	for (int i = 0; i < n; i++) {
		oneMove |= (a[i][c] == 'B');
	}
	for (int j = 0; j < m; j++) {
		oneMove |= (a[r][j] == 'B');
	}
	if (!hasB) {cout << -1 << '\n';}
	else if (a[r][c] == 'B') {cout << 0 << '\n';}
	else if (oneMove) {cout << 1 << '\n';}
	else {cout << 2 << '\n';}
}

return 0;
}