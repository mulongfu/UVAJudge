#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	string s;
	vector<char> output;
	while (getline(cin,s)) {		
		int index = 2, sum = 0;
		for (int i = 2; i <= 9; i++) {
			if (s[i] == '.') {
				;
			}
			else if (s[i] == 'o') {
				sum += pow(2, 8 - index);			
				index++;
			}
			else {
				index++;
			}	
		}
		if (sum == 0)
			;
		else
			output.push_back((char)sum);
	}
	vector<char>::iterator it = output.begin();
	for (it; it != output.end(); it++) {
		cout << *it;
	}
	return 0;
}
