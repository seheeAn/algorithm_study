#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class point {
public:
	int x;
	int y;

	point(int _x, int _y) {
		x = _x;
		y = _y;
	}
};

bool compare(point& a, point& b) {
	if (a.x < b.x) {
		return true;
	}
	else if (a.x == b.x) {
		if (a.y < b.y) {
			return true;
		}
		else return false;
	}
	else return false;
}

int main() {
	int input_num;	
	int x, y = 0;
	vector<point> v;

	cin >> input_num;

	for (int i = 0; i < input_num; i++) {
		cin >> x >> y;
		v.push_back(point(x, y));
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < input_num; i++) {
		cout << v[i].x << ' ' << v[i].y << '\n';
	}
}
