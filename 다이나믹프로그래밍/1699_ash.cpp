#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N;
	int dp[100001] = { 0 };
	cin >> N;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;

	if (N > 3) {
		for (int i = 4; i < N + 1; i++) {
			int b = sqrt(i);
			
			//case1. �������϶�
			if (i == (b*b)){
				dp[i] = 1;
			}
			//case2. �������� �ƴҶ� (b-1�� >1�϶����� �� ������...
			else {
				dp[i] = dp[b * b] + dp[i - b * b];
				for (int j = b - 1; j > 1; j--) {
					dp[i] = min(dp[i], dp[j * j] + dp[i - j * j]);
				}
			}
		}
	}
	cout << dp[N] << endl;

	return 0;
}