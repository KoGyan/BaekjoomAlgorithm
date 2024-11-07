#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//입력받기
	
	int n;
	int x;
	int temp = 0;
	int c = -1;
	int min;
	cin >> n;

	if (n % 3 != 0) {
		x = n / 3 + 1;
		min = x;
		while (x > 0) {
			int k = x;
			
			for (int i = 0; i <= x; i++) {
				temp = 3 * i + 5 * k;
				
				if (temp == n) {
					c = i + k;
			
					if (c < min) {
						min = c;
						
					}
				}
				k--;
			}
			x--;
		}
	}
	else {
		x = n / 3;
		min = x;
		while (x > 0) {
			int k = x;

			for (int i = 0; i <= x; i++) {
				temp = 3 * i + 5 * k;
				
				if (temp == n) {
					
					c = i + k;
					
					if (c < min) {
						min = c;
						
					}
				}
				k--;
			}
			x--;
		}
	}
	cout << c;
}
