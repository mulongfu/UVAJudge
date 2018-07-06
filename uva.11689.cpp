#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			int empty, free, change, sum, total = 0, left = 0;
			cin >> empty >> free >> change;
			left = empty + free;
			while( left >= change ){
				if(left % change == 0){
					left = left / change;
					total += left;
				}
				else{
					total = total + (left / change);
					left = (left / change) + (left % change);
				}
			}
			cout << total << endl;
		}
	}
	return 0;
}
