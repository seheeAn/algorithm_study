#include <iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	if (N == 1)
		cout << "1" << '\n';
	else if (N == 2) {
		cout << min(4, (M + 1) / 2) << endl;
	}
	else {
		if (M <= 6)
			cout << min(4, M) << endl;
		else
			cout << M - 2 << endl;
	}
}
