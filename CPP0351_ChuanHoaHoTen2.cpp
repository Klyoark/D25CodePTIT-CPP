#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;


int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int choice;
        cin >> choice;
        string name;
        getline(cin >> ws, name);
        [&](){
            if (choice == 1) {
                vector<string> svec;
                stringstream sstr(name);
                string word;
                while (sstr >> word) {
                    svec.push_back(word);
                }
                for (int i = 0; i < svec.size(); ++i) {
                    for (char& c : svec[i]) {
                        c = tolower((char)c);
                    }
                    svec[i][0] = toupper((char)svec[i][0]);
                }

                cout << svec[svec.size() - 1] << " ";
                for (int i = 0; i < svec.size() - 1; ++i) {
                    cout << svec[i] << " ";
                }
                cout << NL;
                return;


            } else if (choice == 2) {
                vector<string> svec;
                stringstream sstr(name);
                string word;
                while (sstr >> word) {
                    svec.push_back(word);
                }
                for (int i = 0; i < svec.size(); ++i) {
                    for (char& c : svec[i]) {
                        c = tolower((char)c);
                    }
                    svec[i][0] = toupper((char)svec[i][0]);
                }
                for (int i = 1; i < svec.size(); ++i) {
                    cout << svec[i] << " "; 
                }
                cout << svec[0] << NL;
            }
        }();
    }

    return 0;
}