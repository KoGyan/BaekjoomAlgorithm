#include <iostream>
using namespace std;

int arr[10];

int main() {
    int n, k, ans = 0;
    int sum = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 1; i >= 1; i--) {
        int cnt = (k - sum) / arr[i];

        ans += cnt;
        sum += cnt * arr[i];
    }

    ans += k - sum;

    cout << ans;

    return 0;
}
