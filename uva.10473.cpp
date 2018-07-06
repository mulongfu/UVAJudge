#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string in;
	while (cin >> in) {
		
		if (in[0] == '-')
			return 0;
				
		else if (in[0] == '0' && in[1] == 'x') {	//轉10進位
			stringstream ss;
			ss.clear();	//must do
			ss.str(in); //must do
			int res;
			ss >> hex >> res;
			cout << dec << res << endl;		
		}
		else {						//轉16進位
			cout << "0x" << uppercase << hex << stoi(in) << endl;
		}
	}
	return 0;
}
