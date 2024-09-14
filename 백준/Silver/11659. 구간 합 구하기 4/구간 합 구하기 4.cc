#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
#include<map>
#include <cmath>
#include<utility>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); //입출력 시간 절약
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>summation;
	vector<pair<int, int>> result;
	vector<long long> tempsum(100000);
	int n, m, k;
	cin >> n >> m;
	int first_range, end_range;

	for (int i = 0; i < n; i++) {
		cin >> k;
		summation.push_back(k);
		if (i == 0) {
			tempsum[1] = k;
		}
		else{
			tempsum[i+1] = k + tempsum[i];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> first_range >> end_range;
		result.push_back({first_range, end_range});
	}
	for (int i = 0; i < m; i++) {
		long long sum = 0;
		
		sum = tempsum[result[i].second] - tempsum[result[i].first - 1];
		//cout << "result.second: " << tempsum[result[i].second ] << " result.first: " << tempsum[result[i].first-1] << "\n";
		cout << sum << "\n";
	}
	
}


