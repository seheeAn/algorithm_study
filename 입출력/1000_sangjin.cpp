#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool MathArea(int a) {
	if (0 < a < 10)
		return true;
	else
		return false;

}

int main() {
	int a, b;
	cin >> a >> b;

	if (MathArea(a) && MathArea(b))
		cout << a + b << endl;
	else
		cout << "�߸��� ������ �����Դϴ�." << endl;
}