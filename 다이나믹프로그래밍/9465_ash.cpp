#include <iostream>
using namespace std;

int main() {
	int n[200001] = { 0 }; //�ٵ� 2�������� �ϵ��...
	int trynum;
	cin >> trynum;

	for (int i = 0; i < trynum; i++) { //��ü �ݺ� Ƚ��
		int size;
		cin >> size;
		int num[200001] = { 0 };
		for (int i = 1; i < 2 * size; i += 2) { 
			cin >> num[i]; //ù°��
		}
		for (int i = 2; i < 2 * size + 1; i += 2) {
			cin >> num[i]; //��°��
		}

		n[1] = num[1];
		n[2] = num[2];
		n[3] = num[2] + num[3];
		n[4] = num[1] + num[4];

		if (size > 2) {
			for (int i = 3; i < size + 1; i++) {
				n[2 * i - 1] = max(n[2 * i - 2] + num[2 * i - 1], n[2 * (i - 2)] + num[2 * i - 1]); //���ٷ� ����
				n[2 * i] = max(n[2 * i - 3] + num[2 * i], n[2 * i - 5] + num[2 * i]);  //�Ʒ��ٷ� ����
			}
		}
		int maximum = max(n[2 * size], n[2 * size - 1]);
		cout << maximum << endl;
	}
	return 0;
}