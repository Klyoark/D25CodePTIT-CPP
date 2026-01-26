#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

static const char table[] = {
    '2', '2', '2',       
    '3', '3', '3',       
    '4', '4', '4',      
    '5', '5', '5',      
    '6', '6', '6',      
    '7', '7', '7', '7',  
    '8', '8', '8',       
    '9', '9', '9', '9'   
};

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        string res = "";
        for (char& c : s) {
            c = tolower((char)c);
            res += table[c - 'a'];
        }
        string rev = res;
        reverse(rev.begin(), rev.end());
        cout << (rev == res ? "YES\n" : "NO\n");
    }

    return 0;
}