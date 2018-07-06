#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int now, want;
	while(cin >> now >> want){
		if(now == -1 && want == -1){
			return 0;
		}
		else{
			int cycle, abso;
			abso = abs(now-want);
			cycle = 100 - abs(now-want);
			if(cycle < abso)
				cout << cycle << endl;
			else
				cout << abso << endl;
		}
	}
	return 0;
}
