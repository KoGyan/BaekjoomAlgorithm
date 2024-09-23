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

	//vector<pair<int, int>> timevec;
	vector<int> vec;
	int count, num;


	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> num;
		vec.push_back(num);
	}
	sort(vec.begin(), vec.end());

	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	

}


