#include <bits/stdc++.h>

using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	vector<int> num;
	while (cin >> n) {
		num.push_back(n);
		sort(num.begin(), num.end());
		if (num.size() % 2 == 1) { //奇數個
			int index = num.size() / 2;
			cout << num[index] << endl;
		}
		else {
			int index = num.size() / 2;
			cout << (num[index] + num[index - 1]) / 2 << endl;
		}
	}	
	return 0;
}