#include <iostream>
using namespace std;

int main() {
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(false);

	int N;
	cin >> N;

	cout << N / 5 + N / 25 + N / 125 << '\n';
}
