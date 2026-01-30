#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

int idxlowerbound(const vector<int>& a, int k) {
    int low = 0;
    int high = a.size();
    int mid;
    while (low < high) {
        mid = low + (high - low) / 2;
        if (a[mid] < k) {
            low = mid + 1;
        } else { //a[mid] >= k
            high = mid;
        }
    }
    return low; //lower_bound
}

int main() {
    fastio;

    static mt19937 rng(random_device{}());
    uniform_int_distribution<int> dist(0, 1);

    int t;
    cin >> t;
    while (t--) {
        if (dist(rng)) { 

            int n, k;
            cin >> n >> k;
            vector<int> a(n);
            for (int& x : a) {
                cin >> x;
            }
            sort(a.begin(), a.end());

            bool ok = false;
            int i = 0, j = i + 1;

            while (j < n) {
                if (i >= j) {
                    j++;
                    continue;
                }

                int p = a[j] - a[i];
                if (p == k) {
                    ok = true;
                    break;
                } else if (p > k) {
                    i++;
                } else if (p < k) {
                    j++;
                }
            }

            cout << (ok ? 1 : -1) << NL;

        } else { 

            int n, k;
            cin >> n >> k;
            vector<int> a(n);
            for (int& x : a) {
                cin >> x;
            }
            sort(a.begin(), a.end());

            bool ok = false;
            for (int i = 0; i < n; ++i) {
                int x = a[i] + k;
                int idx = idxlowerbound(a, x);
                //might have dupe, so the third check is to check if k = 0 => dupe
                if (idx != a.size() && a[idx] == x && idx != i) {
                    ok = true;
                    break;
                }
            }

            cout << (ok ? 1 : -1) << NL;
        }
    }


    return 0;
}
