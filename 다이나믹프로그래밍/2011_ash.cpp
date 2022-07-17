#include <iostream>
#include <string>
using namespace std;

int main() {
	int dp[5001][2] = { 0, }; //0: �� ���� ���ڸ� ��  2: �� ���� ���ڸ� ��
	int num[5001] = { 0 };
	string input;

	cin >> input;

	int len = input.length();

	for (int i = len; i > 0; i--) { //��ȣ �Է¹ް� ���� (�Ųٷ�)
		num[i] = input[len-i]-'0'; //������ ��� '0'=48�� ���ָ� ���ڷ� �ٲ� �� �ִ�...
	}
	
	if (num[len] == 0 ) { //��ȣ�� �߸��� ��� case1--> 0���� ����
		cout << 0 << endl;
	} //case 2 --> 0���� ���� 30, 40
	else {
		dp[1][0] = 1;
		dp[1][1] = 0;

		for (int i = 2; i < len + 1; i++) {
			dp[i][0] = (dp[i - 1][0] + dp[i - 1][1]) % 1000000;
			if (num[i] > 2 || (num[i] == 2 && num[i - 1] > 6)) { //27�̻��� ��
				dp[i][1] = 0;
			}
			else if(num[i]==0 && ( num[i+1]!=1 && num[i+1]!=2)){
				cout << 0 << endl;
				return 0;
			}
			else {
				dp[i][1] = dp[i - 1][0];
			}
		}

		cout << (dp[len][0] + dp[len][1]) % 1000000 << endl;
	}

	return 0;
}