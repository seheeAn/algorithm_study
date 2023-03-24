#include <iostream>
#include <string>
using namespace std;

int cnt[27] = { 0 };

int main() {
	string noun;
	cin >> noun;
	for (int i = 0; i < noun.size(); i++) {
		int a = noun[i] - '\0';
		if (a <= 90) {
			cnt[a - 65] += 1;
		}
		else {
			cnt[a - 97] += 1;
		}
	}

	int result = 0;
	int max_idx = 0;
	int max_cnt = 0;
	for (int i = 0; i < 27; i++) {
		if(result < cnt[i]) {
			result = cnt[i];
			max_idx = i;
			max_cnt = 0;
		}
		else if (result == cnt[i]) {
			max_cnt++;
		}
		else {
			continue;
		}
	}
	if (max_cnt != 0) {
		cout << "?" << '\n';
	}
	else {
		int alpha = max_idx + 65;
		cout << (char)alpha << '\n';
	}
}
