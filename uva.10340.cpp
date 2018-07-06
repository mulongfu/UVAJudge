#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, t;
	while (cin >> s >> t) {
		bool find = true;
		int count = 0;
		unsigned t_index = 0, next_run = 0;
		for (int i = 0; i < s.size(); i++) {
			for (; next_run < t.size();) {
				if (t[next_run] == s[i]) {					
					next_run++;
					count++;					
					break;
				}
				else {
					next_run++;
				}
			}
		}
		if (count == s.size()) {
			cout << "Yes" << endl;
		}
		else
			cout << "No" << endl;
	}
	return 0;
}
