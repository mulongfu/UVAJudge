#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	char in[300] = { '\0' };
	while (cin.getline(in, 300)) {
		int count = 0, outer = 0, inner = 0;
		while (in[outer] != '\0') {			
			while (in[inner] != ' ' && in[inner] != '!' && in[inner] != '.' && in[inner] != ')' && in[inner] != '\0') {
				if ((in[inner] >= 'A' && in[inner] <= 'Z') || (in[inner] >= 'a' && in[inner] <= 'z')) {	
					while ((in[inner + 1] >= 'A' && in[inner + 1] <= 'Z') || (in[inner + 1] >= 'a' && in[inner + 1 ] <= 'z')) {
						inner++;
						outer++;
					}
					inner++;
					count++;					
					outer++;
				}
				else {
					inner++;
					outer++;
				}
				
			}	
			inner++, outer++;
		}
		cout << count << endl;
		for (int i = 0; i < 300; i++) {
			in[i] = '\0';
		}
	}
	
	return 0;
}
