#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

void quicksort(vector<ll>& a, int left, int right) {
    if (left >= right)  {
        return;
    }

    int mid = left + (right - left) / 2;
    if (a[mid] < a[left]) { swap(a[mid], a[left]); }
    if (a[right] < a[left]) { swap(a[left], a[right]); }
    if (a[right] < a[mid]) { swap(a[right], a[mid]); }

    ll pivot = a[left + (right - left) / 2];
    int i = left, j = right;
    while (i <= j) {
        while (a[i] < pivot) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < j) {
        quicksort(a, left, j);
    }
    if (i < right) {
        quicksort(a, i, right);
    }
}

void check(const vector<ll>& a, int n) {
    int left, right;
    for (int i = n - 1; i >= 2; --i) {
        left = 0;
        right = i - 1;
        while (left < right) {
            if (a[left] + a[right] == a[i]) {
                cout << "YES\n";
                return;
            } else if (a[left] + a[right] < a[i]) {
                left++;
            } else {
                right--;
            }
        }
    }
    cout << "NO\n";
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);

        ll y;
        for (ll& x : a) {
            cin >> y;
            x = y * y;
        }
        quicksort(a, 0, n - 1);
        check(a, n);
    }

    return 0;
}