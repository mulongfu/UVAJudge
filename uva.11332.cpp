#include <bits/stdc++.h>
using namespace std;

int func(string n) {
	if (n.size() == 1)
		return stoi(n);
	else {
		int result = 0;
		for (int i = 0; i < n.size(); i++) {
			result += n[i] - '0';
		}		
		return func(to_string(result));
	}
}

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string in;
	while (cin >> in) {
		if (in == "0")
			return 0;
		else
			cout << func(in) << endl;
	}
	return 0;
}