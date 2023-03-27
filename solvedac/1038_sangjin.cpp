#include <iostream>
#include <string>
#include <vector>
using namespace std;

string end_num = "9876543210";
vector<string> number;

int main() {
	int N;
	cin >> N;
	
  for (int i = 0; i < 10; i++) {
		string a = to_string(i);
		number.push_back(a);
	}
  
	int start_size = 0;
	while (true) {
		int size = number.size();
		if (number.back() == end_num) {
			break;
		}

		for (int i = 1; i < 10; i++) {
			for (int k = start_size; k < size; k++) {
				string basic = number[k];
				string start_num = basic.substr(0, 1);
				if (i > stoi(start_num)) {
					string string_i = to_string(i);
					string new_num = string_i + basic;
					number.push_back(new_num);
				}
				else 
					break;
			}
		}
		start_size = size;
	}	
  
	if (N >= number.size()) {
		cout << "-1" << '\n';
	}
	else {
		cout << number[N] << '\n';
	}
  
}
