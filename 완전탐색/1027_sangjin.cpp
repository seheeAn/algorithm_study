#include <iostream>
using namespace std;

double building[51] = { 0 };
int up_cnt[51] = { 0 };
int down_cnt[51] = { 0 };
int total_cnt[51] = { 0 };
int main() {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int a;
		cin >> building[i];
	}

	for (int i = 0; i < N - 1 ; i++) {
		int count = 1;
		double lean = (building[i + 1] - building[i]);
		for (int j = i + 2; j < N; j++) {
			double y = lean * (j - i) + building[i];
			if (y < building[j]) {

				count++;
				lean = (building[j] - building[i]) / (j - i);
			}
		}
		up_cnt[i] = count;
	}
	
	for (int i = N - 1 ; i >= 1; i--) {
		int count = 1;
		double lean = (building[i] - building[i - 1]);

		for (int j = i - 2; j >= 0; j--) {
			double y = lean * (j - i) + building[i];
			if (y < building[j]) {
				count++;
				lean = (building[j] - building[i]) / (j - i);
			}
		}
		down_cnt[i] = count;
	}
	


	int result = 0;
	for (int i = 0; i < N; i++) {
	
		int total_cnt = up_cnt[i] + down_cnt[i];
		if (result < total_cnt) {
			result = total_cnt;
		}
	}

	cout << result << endl;

}