#include <bits/stdc++.h>
using namespace std;

int f91(int n){
	if(n<=100)
		return f91(f91(n+11));
	else
		return n-10;
}
int main(){
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	while(cin >> n){
		if(n == 0)
			return 0;
		else{
		int result = f91(n);
		cout << "f91(" << n << ") = " << result << endl;
		}
	}
	return 0;
}
