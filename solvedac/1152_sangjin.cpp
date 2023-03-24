#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	
	getline(cin, s);

	if (s.empty()) {
		std::cout << "0" << '\n';
		return 0;
	}

	int cnt = 1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			cnt++;
		}
		else 
			continue;
	}
	if (s[0] == ' ')
		cnt--;
	if (s[s.size() - 1] == ' ')
		cnt--;

	if (cnt < 0) {
		cout << "0" << '\n';
	}
	else {
		cout << cnt << '\n';
	}
}
