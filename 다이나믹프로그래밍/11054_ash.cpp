#include <iostream>
using namespace std;

int main() {
	int dp[1001][2] = { 0, }; //0:�����ϴ� �κ� 1:�����ϴ� �κ�
	int size;
	cin >> size;
	int num[1001] = { 0 };

	for (int i = 1; i < size + 1; i++) {
		cin >> num[i];
	}

	for (int i = 1; i < size + 1; i++) {
		dp[i][0] = 1;
		for (int j = 0; j < i; j++) { //�����ϴ� �κ�
			if (num[i] > num[j]) {
				dp[i][0] = max(dp[i][0], dp[j][0] + 1);
			}
		}
	}

	for (int i = size; i > 0; i--) { //�����ϴ� �κ�
		dp[i][1] = 1;
		for (int j = size; j > i; j--) {
			if (num[i] > num[j]) {
				dp[i][1] = max(dp[i][1], dp[j][1] + 1);
			}
		}
	}
	
	int sol = 0;
	for (int i = 1; i < size + 1; i++) { //�ִ밪 ��
		sol = max(sol, dp[i][0] + dp[i][1] - 1);
	}

	cout << sol << endl;

	return 0;
}
