#include <bits/stdc++.h>
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);
#define ll long long
constexpr char NL = '\n';
using namespace std;

void quicksort(vector<int>& a, int left, int right) {
    if (left >= right) {
        return;
    }
    int pivot = a[left + (right - left) / 2];
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
    if (j > left) {
        quicksort(a, left, j);
    } 
    if (i < right) {
        quicksort(a, i, right);
    }
}

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int& x : a) {
            cin >> x;
        }
        quicksort(a, 0, n - 1);

        cout << a[k - 1];
        cout << NL;
    }

    return 0;
}