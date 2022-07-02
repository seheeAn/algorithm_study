#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int* sol = new int[n + 1]; //���ڶ� �ε����� ���߱�

	if (n ==1) {
		sol[1] = 1;
	}
	else if (n == 2) {
		sol[1] = 1;
		sol[2] = 3;
	}
	else {
		sol[1] = 1;
		sol[2] = 3;
		for (int i = 3; i < n + 1; i++) {
			sol[i] = (sol[i - 1] + sol[i - 2]*2) % 10007; //int �� ���� ������ ����Ҷ����� 10007�� �����ش�;;
		}
	}
	cout << sol[n];

	delete[] sol;
	return 0;
}