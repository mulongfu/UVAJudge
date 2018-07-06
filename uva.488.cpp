#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	while(cin >> n){
		for(int i = 0; i < n; i++){
			int a, f;
			cin >> a >> f;
			int inter, outer = 1;
			for(int i = 0; i < f; i++){
				for(outer; outer <= a; outer++){
					inter = outer;
					while(inter > 0){
						cout << outer;
						inter--;
					}
					cout << endl;
				}
				if(outer - 1 == a){
					for(outer = a - 1; outer > 0; outer--){
						inter = outer;
						while(inter > 0){
							cout << outer;
							inter--;
						}
						cout << endl;
					}	
				}
			}
			if(i == n-1)
				cout << "";
			else
				cout << endl;
		}
	}
	return 0;
}
