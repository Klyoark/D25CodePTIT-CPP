#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int main() {
    fastio;

    fstream fs1("DATA1.in");
    fstream fs2("DATA2.in");
    set<string> s1, s2;
    string s;
    while(fs1 >> s) {
        for (char& c : s) {
            c = tolower(c);
        }
        s1.insert(s);
    }
    while (fs2 >> s) {
        for (char& c : s) {
            c = tolower(c);
        }
        s2.insert(s);
    }

    vector<string> U, I;
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(U));
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(I));

    for (string& s : U) {
        cout << s << " ";
    }
    cout << NL;
    
    for (string& s : I) {
        cout << s << " ";
    }
    cout << NL;


    fs1.close();
    fs2.close();
    return 0;
}