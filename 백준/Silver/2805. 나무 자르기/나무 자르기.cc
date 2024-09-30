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

	vector<pair<int, int>> timevec;
	vector<long long> vec;  //상근이가 가지고 있는 마ㅜ 갯수
	vector<long long> checkvec;
	vector<int> resultnum;

	int n, m;
	int x;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x;
		vec.push_back(x);
	}

	sort(vec.begin(), vec.end());

	int start = 0; // 가장 작은 나무의 높이
	long long end = vec[n - 1]; // 가장 높은 나무의 높이
	long long treesum;
	int mid;

	while (start <= end) {
		mid = (start + end) / 2;
		treesum = 0;

		for (int i = 0; i < vec.size(); i++) {
			if (vec[i] > mid) {
				treesum += vec[i] - mid;
			}
		}
		if (treesum < m) {
			end = mid - 1;
		}
		else {
			start = mid + 1;

		}


	}
	cout << end;

}


