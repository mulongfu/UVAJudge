#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, id = 1;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int temp, count = 0;
			cin >> temp;
			string tie;
			cin >> tie;
			for (int i = 0; i < tie.size(); i++) {				
				if (tie[i] == '.'  && i + 1 < tie.size() && i + 2 < tie.size()) {					
					tie[i] = tie[i + 1] = tie[i + 2] = '#';
					count++;
				}
				else if (tie[i] == '.' && i + 1 < tie.size()) {
					tie[i] = tie[i + 1] = '#';
					count++;
				}
				else if (tie[i] == '.'  && i + 1 == tie.size()) {
					tie[i] = '#';
					count++;
				}
			}
			cout << "Case " << id << ": " << count << endl;
			id++;
		}
	}
	return 0;
}
