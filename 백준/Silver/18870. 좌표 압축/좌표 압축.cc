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
	vector<long long> vec;
	vector<long long> checkvec;
	vector<int> resultnum;
	int count = 0;
	int n;
	long long x;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		vec.push_back(x);
		checkvec.push_back(x);
	}

	sort(checkvec.begin(), checkvec.end());// 시작 시간 기준으로 정렬
	checkvec.erase(unique(checkvec.begin(), checkvec.end()), checkvec.end()); // 중복된거 지우기

	for (int i = 0; i < n; i++) {
		int deff;
		deff = lower_bound(checkvec.begin(), checkvec.end(), vec[i]) - checkvec.begin();
		resultnum.push_back(deff);
	}


	for (int i = 0; i < resultnum.size(); i++) {
		cout << resultnum[i] << " ";
	}

}


