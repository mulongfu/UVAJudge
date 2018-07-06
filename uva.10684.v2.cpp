#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector <int> seq(10000);
	int n;
	while (cin >> n) {
		int max = 0, localmax = 0;
		bool first = false;
		if (n == 0)
			return 0;
		else {
			for (int i = 0; i < n; i++) {
				cin >> seq[i];
			}
			for (int i = 0; i < n; i++) {
				if (localmax + seq[i] < 0) {
					localmax = 0;
					continue;
				}
				else {
					localmax += seq[i];
				}
				if (localmax > max)
					max = localmax;
				
			}
		}
		if (max <= 0)
			cout << "Losing streak." << endl;
		else
			cout << "The maximum winning streak is " << max << "." << endl;
	}

	return 0;
}

