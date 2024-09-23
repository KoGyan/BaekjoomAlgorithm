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
	int sum = 0;
	int c = 0; //몇번 나왔는지 체크
	int find;

	cin >> count;

	for (int i = 0; i < count; i++) {
		cin >> num;
		vec.push_back(num);
	}
	cin >> find;
	sort(vec.begin(), vec.end());

	int startp = 0;
	int endp = count - 1;
	while (startp < endp) {
		sum = vec[startp] + vec[endp];
		if (sum < find) {
			startp++;

		}
		else if (sum == find) {
			c++;
			startp++;
		}
		else {
			endp--;
		}
	}
	cout << c << endl;

}


