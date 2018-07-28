#include <iostream>
using namespace std;

int main() {
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int start, first, second, third;
	while (cin >> start >> first >> second >> third) {
		if (start == 0 && first == 0 && second == 0 && third == 0)
			return 0;
		else {
			int degree = 0, interval = 0;
			degree += 720;	 //first step
			interval = (((start - first) % 40) + 40) % 40;//second step
			degree += interval * 9;
			degree += 360;	//third step
			interval = (((second - first) % 40) + 40) % 40;	//forth step, counterclockwise
			
			degree += interval * 9;
			interval = (((second - third) % 40) + 40) % 40;
			degree += interval * 9;
			cout << degree << endl;
		}
	}
	return 0;
}

