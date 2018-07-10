#include <bits/stdc++.h>
using namespace std;

int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, id = 1;
	while(cin >> n){
		for(int i = 0; i < n; i++){
			int a, b, total = 0;
			cin >> a;
			cin >> b;
			for(int i = a; i <= b; i++){
				if(i % 2 !=0)
					total += i;
			}
			cout << "Case " << id << ": " << total << endl;
			id++;
		}
	}
	return 0;
}
