#include <iostream>
#include <vector>
#include <cmath>
#include<algorithm>
#include<map>
#include <cmath>
#include<utility>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	return a.second > b.second; // value 기준으로 내림차순 정렬
}

int main()
{
	ios_base::sync_with_stdio(false); //입출력 시간 절약
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> inputdata;
	map<int, int> manymap;
	int count, input;
	double sum = 0;
	int mid = 0;
	int many = 0;
	int rangee = 0;
	int avg = 0;
	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> input;
		inputdata.push_back(input);

	}

	sort(inputdata.begin(), inputdata.end());

	for (int i = 0; i < inputdata.size(); i++) {
		sum += inputdata[i];
		if (inputdata.size() > 1) {
			rangee = inputdata[inputdata.size() - 1] - inputdata[0];
		}
		mid = inputdata[inputdata.size() / 2];

		if (manymap.find(inputdata[i]) != manymap.end()) {
			manymap[inputdata[i]]++;
		}
		else {
			manymap[inputdata[i]] = 1;
		}
	}

	vector<pair<int, int>> change(manymap.begin(), manymap.end());
	sort(change.begin(), change.end(), cmp);

	if (count == 1) {
		many = inputdata[0];
	}
	else {
		if (change[0].second != change[1].second) {
			many = change[0].first;
		}
		else {
			many = change[1].first;
		}
	}
	avg = round(sum / count);
	if (avg == -0) {
		avg = 0;
	}
	cout << avg << "\n" << mid << "\n" << many << "\n" << rangee << endl;

}

