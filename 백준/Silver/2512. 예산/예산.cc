#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
#include<map>
#include <cmath>
#include<utility>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); //입출력 시간 절약
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    int num;
    vector<int> vecm;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        vecm.push_back(num);
    }

    cin >> m;
    int total_budget = m;
    sort(vecm.begin(), vecm.end());

    int low = 0;
    int high = vecm[n - 1]; 

    int answer = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        int total = 0;


        for (int i = 0; i < n; i++) {
            total += min(vecm[i], mid);
        }

        if (total <= total_budget) {
            answer = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << answer << '\n';
    return 0;
}