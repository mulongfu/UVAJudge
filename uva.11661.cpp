#include <bits/stdc++.h>
using namespace std;

string in;

/*inline int find_prev(int _now) {
	for (int i = _now - 1; i >= 0; i--) {
		if (in[i] == 'D')
			return i;
	}
	return 214748364;
}

inline int find_back(int _now) {
	for (int i = _now + 1; i < in.size(); i++) {
		if (in[i] == 'D')
			return i;
	}
	return 214748364;
}*/

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int l;
	while (scanf("%d", &l) == 1 && l) {
		if (l == 0)
			break;
		else {
 			cin >> in;
			int dist = 214748364, dloca = 0, rloca = 0, i = 0;
			bool nomeetD = true, nomeetR = true;
			for (i; i < in.size(); i++) {
				if (in[i] == 'Z') {
					dist = 0;
					break;
				}
			
				else if (in[i] == 'D') {
					nomeetD = false;
					if (nomeetR) {
						dloca = i;
					}
					else {
						dloca = i;
						if (dist > abs(i - rloca)) {
							dist = abs(i - rloca);
						}
					}
				}

				else if (in[i] == 'R') {
					nomeetR = false;
					if (nomeetD) {
						rloca = i;
					}
					else {
						rloca = i;
						if (dist > abs(dloca - i)) {
							dist = abs(dloca - i);							
						}
					}
				}

				/*else {
					if (in[i] == 'R') {						
						if (dist > min(abs(i - find_prev(i)), abs(i - find_back(i))))
							dist = min(abs(i - find_prev(i)), abs(i - find_back(i)));
					}				
				}*/
			}
			/*if (!nomeetD && !nomeetR) {
				if (dist > abs(dloca - rloca)) {
					dist = abs(dloca - rloca);
				}
			}*/

			if (dist == 214748364)
				cout << 0 << endl;

			else 
				cout << dist << endl;
									
		}
	}

	return 0;
}