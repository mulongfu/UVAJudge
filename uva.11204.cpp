#include <bits/stdc++.h>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while (cin >> n) {
		int id = 1;
		for (int i = 0; i < n; i++) {
			int instrus, students, result = 1;
			int instrus_students[33][33] = { 0 };
			int that_instr_first[33] = { 0 };
		
			cin >> instrus >> students;
			for (int i = 0; i < students; i++) {
				for (int j = 0; j < instrus; j++) {
					cin >> instrus_students[i][j];
				}
			}						
			for (int i = 0; i < instrus; i++) {	
				for (int j = 0; j < students; j++) {
					if (instrus_students[j][i] == 1) {
						that_instr_first[i]++;
					}					
				}				
			}		
			/*for (int i = 0; i < instrus; i++) {
				cout << that_instr_first[i];
			}*/
			
			for (int i = 0; i < instrus; i++) {
				if(that_instr_first[i] != 0)
					result *= that_instr_first[i];
			}
			cout << result << endl;
		}
	}
	return 0;
}