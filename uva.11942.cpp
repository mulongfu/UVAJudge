#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		cout << "Lumberjacks:" << endl;
		for(int i = 0; i < n; i++){
			vector<int> origin;
			for(int i = 0; i < 10; i++){
				int temp;
				cin >> temp;
				origin.push_back(temp);
			}
			vector<int> sorted_l(origin.begin(), origin.end());
			sort(sorted_l.begin(), sorted_l.end(), less<int>());
			vector<int> sorted_g(origin.begin(), origin.end());
			sort(sorted_g.begin(), sorted_g.end(), greater<int>());
			if(origin == sorted_l || origin == sorted_g)
				cout << "Ordered" << endl;
			else
				cout << "Unordered" << endl;
			}
	}
	return 0;
}
