#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;
int ktra(string s) {
	for (int i = 0; i < s.length(); i++)
		if (s[i] > '9' || s[i] < '0')
			return 0;
	if (s.length() > 10) return 0;
	return 1;
}
int main() {
	ll res = 0;
	fstream file;
	file.open("DATA.in");
	while (1) {
		string s;
		file >> s;
		if (file.eof()) {
			break;
		}
		if (ktra(s)) {
			res += stoi(s);
		}
	}
	file.close();
	cout << res << endl;
}