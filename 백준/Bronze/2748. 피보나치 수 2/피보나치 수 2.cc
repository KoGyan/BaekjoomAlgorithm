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

	vector<long long>fibonacci;
	fibonacci.push_back(0);
	fibonacci.push_back(1);

	int n;
	int sum = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		long long k = fibonacci[i - 1] + fibonacci[i - 2];
		fibonacci.push_back(k);
	}
	
	cout << fibonacci[n] << endl;
	
}


