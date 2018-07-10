#include <iostream>
#include <set>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n , r;
	while (cin >> n >> r) {
		if (n == r) {
			set<int> good;
			for (int i = 0; i < r; i++) {
				int num;
				cin >> num;
				good.insert(num);
			}
			cout << "*" << endl;
		}
		else {
			set<int> order;
			for (int i = 0; i < r; i++) {
				int num;
				cin >> num;
				order.insert(num);
			}			

			for (int i = 1; i <= n; i++) {
				set<int>::iterator it = order.find(i);
				if (it != order.end()) {		
					;
				}
				else {
					cout << i << " ";					
				}
			}
			cout << endl;
		}
	}
	return 0;
}
